#include <control_flow.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <string.h>
#include <libgen.h>
#include <stdlib.h>
#include <stdio.h>
#include <lib/mkdir_p.h>

void print_statements_control_flow(FILE* output, struct statements* statements, struct ControlFlowContext* context);
void print_statement_control_flow(FILE* output, struct statement* statement, struct ControlFlowContext* context);
void print_expression_control_flow(FILE* output, struct expression* expression, struct ControlFlowContext* context);
void print_statements_or_source_items_control_flow(FILE* output, struct statements_or_source_items* statements_or_src_items_block, struct ControlFlowContext* context);
void print_source_control_flow(struct source_item* current_source_item, struct ControlFlowContext* context);

bool file_exists(char *filename) {
  struct stat buffer;   
  return stat(filename, &buffer) == 0;
}

void print_typeref_control_flow(FILE* output, struct typeref* typeref, struct ControlFlowContext* context) {
    switch (typeref->type) {
        case TYPEREF_BOOL: {
            fprintf(output, "bool");
            break;
        }
        case TYPEREF_BYTE: {
            fprintf(output, "byte");
            break;
        }
        case TYPEREF_INT: {
            fprintf(output, "int");
            break;
        }
        case TYPEREF_UINT: {
            fprintf(output, "uint");
            break;
        }
        case TYPEREF_LONG: {
            fprintf(output, "long");
            break;
        }
        case TYPEREF_ULONG: {
            fprintf(output, "ulong");
            break;
        }
        case TYPEREF_CHAR: {
            fprintf(output, "char");
            break;
        }
        case TYPEREF_STRING: {
            fprintf(output, "string");
            break;
        }
        case TYPEREF_CUSTOM_TYPE: {
            fprintf(output, "%s", typeref->custom_type);
            break;
        }
        case TYPEREF_ARRAY: {
            print_typeref_control_flow(output, typeref->typeref, context);
            fprintf(output, "[%d]", typeref->size);
            break;
        }
    }
}

void print_function_signature_control_flow(FILE* output, struct function_signature* function_signature, struct ControlFlowContext* context) {
    fprintf(output, "function %s(", function_signature->identifier);
    struct argument_list* arguments_list = function_signature->arguments_list;
    while (arguments_list) {
        struct argument* argument = arguments_list->argument;
        fprintf(output, "%s", argument->arg_identifier);
        if (argument->args_type) {
            fprintf(output, ": ");
            print_typeref_control_flow(output, argument->args_type, context);
        }
        if (arguments_list->arguments)
            fprintf(output, ", ");
        arguments_list = arguments_list->arguments;
    }
    
    fprintf(output, ")");
    if (function_signature->typeref) {
        fprintf(output, ": ");
        print_typeref_control_flow(output, function_signature->typeref, context);
    }
    fprintf(output, "\n");
}

void print_statements_or_source_items_control_flow(FILE* output, struct statements_or_source_items* statements_or_src_items_block, struct ControlFlowContext* context) {
    struct statements_or_source_items* statements_or_source_items_entry = statements_or_src_items_block;
    while (statements_or_source_items_entry) {
        switch (statements_or_source_items_entry->type) {
            case STATEMENT: {
                print_statement_control_flow(output, statements_or_source_items_entry->statement, context);
                break;
            }
            case SOURCE_ITEM: {
                print_source_control_flow(statements_or_source_items_entry->source_item, context);
                fprintf(output, ":declare ");
                print_function_signature_control_flow(output, statements_or_source_items_entry->source_item->function_signature, context);
                fprintf(output, ";\n");
                break;
            }
        }
        statements_or_source_items_entry = statements_or_source_items_entry->rest_stmts_or_src_items;
    }
}

char* unary_operator_to_string(enum unary_operation_enum unary_operation) {
    switch (unary_operation) {
        case UNARY_OP_PLUS:
            return "+";
        case UNARY_OP_MINUS:
            return "-";
    }
}

// no escaping
char* binary_operator_to_string(enum binary_operation_enum binary_operation) {
    switch (binary_operation) {
            case BINARY_OP_ADD:
                return "+";
            case BINARY_OP_SUB:
                return "-";
            case BINARY_OP_MUL:
                return "*";
            case BINARY_OP_DIV:
                return "/";
            case BINARY_OP_DIV_REMAINDER:
                return "%";
            case BINARY_OP_ASSIGNMENT:
                return "=";
            case BINARY_OP_EQ:
                return "==";
            case BINARY_OP_NOT_EQ:
                return "!=";
            case BINARY_OP_GT:
                return ">";
            case BINARY_OP_GE:
                return ">=";
            case BINARY_OP_LT:
                return "<";
            case BINARY_OP_LE:
                return "<=";
    }
}

void print_expression_list_control_flow(FILE* output, struct expression_list* expression_list, struct ControlFlowContext* context) {
    struct expression_list* current_expression_list_entry = expression_list;
    while (current_expression_list_entry) {
        print_expression_control_flow(output, current_expression_list_entry->expression, context);
        if (current_expression_list_entry->rest_expressions)
            fprintf(output, ", ");
        current_expression_list_entry = current_expression_list_entry->rest_expressions;
    }
}

void fprint_binary(FILE *stream, unsigned long number) {
    if (number >> 1) {
        fprint_binary(stream, number >> 1);
    }
    fputc('0' + (number & 1), stream);
}

// no \n
void print_expression_control_flow(FILE* output, struct expression* expression, struct ControlFlowContext* context) {
    switch (expression->type) {
        case BINARY_OPERATION: {
            print_expression_control_flow(output, expression->left_expression, context);
            fprintf(output, " %s ", binary_operator_to_string(expression->binary_operation));
            print_expression_control_flow(output, expression->right_expression, context);
            break;
        }
        case UNARY_OPERATION: {
            fprintf(output, " %s ", unary_operator_to_string(expression->unary_operation));
            print_expression_control_flow(output, expression->right_expression, context);
            break;
        }
        case EXPRESSION: {
            print_expression_control_flow(output, expression->left_expression, context);
            break;
        }
        case FUNCTION_CALL: {
            struct function_call* function_call = expression->function_call;
            fprintf(output, "call ");
            print_expression_control_flow(output, function_call->expression, context);
            fprintf(output, "(");
            print_expression_list_control_flow(output, function_call->rest_expressions, context);
            fprintf(output, ")");
            break;
        }
        case INDEXER: {
            struct indexer* indexer = expression->indexer;
            print_expression_control_flow(output, indexer->expression, context);
            fprintf(output, "[");
            print_expression_list_control_flow(output, indexer->expressions_list, context);
            fprintf(output, "]");
            break;
        }
        case ID: {
            fprintf(output, "%s", expression->identifier);
            break;
        }
        case LITERAL: {
            struct literal* literal = expression->literal;
            switch (literal->type) {
                case LITERAL_BOOL: {
                    fprintf(output, "%s", literal->boolean ? "true" : "false");
                    break;
                }
                case LITERAL_STR: {
                    fprintf(output, "~%s", literal->str);
                    break;
                }
                case LITERAL_CHAR: {
                    fprintf(output, "'%c'", literal->symbol);
                    break;
                }
                case LITERAL_HEX: {
                    fprintf(output, "0x%lx", literal->number);
                    break;
                }
                case LITERAL_BITS: {
                    fprintf(output, "0b");
                    fprint_binary(output, literal->number);
                    break;
                }
                case LITERAL_DEC: {
                    fprintf(output, "%ld", literal->number);
                    break;
                }
            }
            break;
        }
    }
}

void print_statement_control_flow(FILE* output, struct statement* statement, struct ControlFlowContext* context) {
    switch (statement->type) {
        case IF: {
            fprintf(output, "if (");
            print_expression_control_flow(output, statement->expression, context);
            fprintf(output, "?) then (Yes)\n");
            print_statement_control_flow(output, statement->true_statement, context);
            if (statement->false_statement) {
                fprintf(output, "else (No)\n");
                print_statement_control_flow(output, statement->false_statement, context);
            }
            fprintf(output, "endif\n");
            break;
        }
        case WHILE: {
            fprintf(output, "while (");
            print_expression_control_flow(output, statement->expression, context);
            fprintf(output, "?) is (Yes)\n");
            print_statements_control_flow(output, statement->loop_statements, context);
            fprintf(output, "endwhile (No)\n");
            break;
        }
        case UNTIL: {
            fprintf(output, "while (");
            print_expression_control_flow(output, statement->expression, context);
            fprintf(output, "?) is (No)\n");
            print_statements_control_flow(output, statement->loop_statements, context);
            fprintf(output, "endwhile (Yes)\n");
            break;
        }
        case DO_WHILE: {
            fprintf(output, "repeat\n");
            print_statement_control_flow(output, statement->do_while_statement, context);
            fprintf(output, "repeat while (");
            print_expression_control_flow(output, statement->expression, context);
            fprintf(output, "?) is (Yes) not (No)\n");
            break;
        }
        case DO_UNTIL: {
            fprintf(output, "repeat\n");
            print_statement_control_flow(output, statement->do_while_statement, context);
            fprintf(output, "repeat while (");
            print_expression_control_flow(output, statement->expression, context);
            fprintf(output, "?) is (No) not (Yes)\n");
            break;
        }
        case BREAK: {
            fprintf(output, ":break;;\n");
            break;
        }
        case EXPR: {
            fprintf(output, ":");
            print_expression_control_flow(output, statement->expression, context);
            fprintf(output, ";\n");
            break;
        }
        case STMT: {
            print_statements_or_source_items_control_flow(output, statement->statements_or_src_items_block, context);
            break;
        }
    }
}

void print_statements_control_flow(FILE* output, struct statements* statements, struct ControlFlowContext* context) {
    if (!statements) {
        fprintf(stderr, "Statements is NULL\n");
        return;
    }

    struct statements* current_statement_entry = statements;
    while (current_statement_entry) {
        struct statement* current_statement = current_statement_entry->statement;
        print_statement_control_flow(output, current_statement, context);
        current_statement_entry = current_statement_entry->rest_statements;
    }
}

void print_source_control_flow(struct source_item* current_source_item, struct ControlFlowContext* context) {
    if (!current_source_item) {
        fprintf(stderr, "Source item is NULL\n");
        return;
    }
    
    // filename = input_name + '.' + source_item_name + '.uml'
    char* input_path_copy = strdup(context->input_path);
    char* output_basename = basename(input_path_copy);
    char* last_dot = strrchr(output_basename, '.');
    if (last_dot) {
        *last_dot = '\0';
    }
    char* output_filename = calloc(strlen(output_basename) + strlen(current_source_item->function_signature->identifier) + 5, sizeof(char));
    strcpy(output_filename, output_basename);
    strcat(output_filename, ".");
    strcat(output_filename, current_source_item->function_signature->identifier);
    strcat(output_filename, ".uml");

    // Concat output_directory and output_filename
    char* output_path = calloc(strlen(context->output_directory) + strlen(output_filename) + 2, sizeof(char));
    strcpy(output_path, context->output_directory);
    strcat(output_path, "/");
    strcat(output_path, output_filename);

    // Add filename to context to avoid duplicates
    context->existing_names = realloc(context->existing_names, (context->num_existing_names + 1) * sizeof(char*));
    context->existing_names[context->num_existing_names] = output_filename;
    context->num_existing_names++;

    // Check if output_path already exists
    if (file_exists(output_path)) {
        fprintf(stderr, "File already exists: %s\n", output_path);
        free(output_path);
        return;
    }

    // Create output file
    FILE* output_file = fopen(output_path, "w");
    if (!output_file) {
        perror("Could not open file to write to");
        free(output_path);
        return;
    }

    fprintf(output_file, "@startuml\n");

    struct function_signature* function_signature = current_source_item->function_signature;
    struct statements* statements = current_source_item->statements;

    fprintf(output_file, "title ");
    print_function_signature_control_flow(output_file, function_signature, context);
    fprintf(output_file, "\n");

    fprintf(output_file, "start\n");
    print_statements_control_flow(output_file, statements, context);
    fprintf(output_file, "end\n");

    fprintf(output_file, "@enduml\n");

    free(input_path_copy);
    fclose(output_file);
}   

void print_control_flow(const char* input_path, struct source* ast, const char* output_directory) {
    if (!ast) {
        fprintf(stderr, "AST is NULL\n");
        return;
    }

    if (mkdir_p(output_directory, 0700) == -1) {
        perror("Could not create output directory");
        return;
    }

    struct ControlFlowContext* context = calloc(1, sizeof(struct ControlFlowContext));
    struct source_items* current_source_item = ast->source_items;
    context->input_path = input_path;
    context->output_directory = output_directory;

    while (current_source_item) {
        print_source_control_flow(current_source_item->source_item, context);
        current_source_item = current_source_item->rest_source_items;
    }

    for (int i = 0; i < context->num_existing_names; ++i)
        free(context->existing_names[i]);
    free(context->existing_names);
    free(context);
}