#include "uml_utils.h"
#include "ast.h"

void print_function_signature(struct function_signature* function_signature);
void print_source_item(struct source_item* source_item);
void print_statements(struct statements* statements);
void print_statements_or_source_items(struct statements_or_source_items* statements_or_source_items);
void print_function_call(struct function_call* function_call);
void print_indexer(struct indexer* indexer);

void child(int id, int child, const char* text) {
    if (child != -1) {
        if (text != NULL)
            fprintf(output_file, "id%d --> id%d : \"%s\"\n", id, child, text);
        else
            fprintf(output_file, "id%d --> id%d\n", id, child);
    }
}

void object(int id, const char* title, const char* text) {
    fprintf(output_file, "object \"%s\" as id%d {\n%s\n}\n", title, id, text);
}

void rectangle(int id, const char* title) {
    fprintf(output_file, "rectangle \"%s\" as id%d {\n}\n", title, id);
}

void print_literal(struct literal* literal) {
    if (literal == NULL) return;
    char* text;
    char arr[64];

    switch (literal->type) {
        case LITERAL_BOOL:
            text = (literal->boolean) ? "true" : "false";
            break;

        case LITERAL_STR:
            text = literal->str;
            break;

        case LITERAL_CHAR:
            arr[0] = literal->symbol;
            arr[1] = '\0';
            text = arr;
            break;

        case LITERAL_HEX:
            sprintf(arr, "0x%lx", literal->number);
            text = arr;
            break;

        case LITERAL_BITS:
            sprintf(arr, "0b%ld", literal->number);
            text = arr;
            break;

        case LITERAL_DEC:
            sprintf(arr, "%ld", literal->number);
            text = arr;
            break;
    }

    object(literal->id, "literal", text);
}

char* string_binary_operator(enum binary_operation_enum binary_operation) {
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
                return "\"==\"";
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

char* string_unary_operator(enum unary_operation_enum unary_operation) {
    switch (unary_operation) {
        case UNARY_OP_PLUS:
            return "+";
        case UNARY_OP_MINUS:
            return "-";
    }
}

void print_expression(struct expression* expression) {
    if (expression == NULL) return;
    switch (expression->type) {
        case BINARY_OPERATION:
            object(expression->id, "binary operator", string_binary_operator(expression->binary_operation));
            print_expression(expression->left_expression);
            print_expression(expression->right_expression);
            child(expression->id, expression->left_expression->id, "left");
            child(expression->id, expression->right_expression->id, "right");
            break;
        case UNARY_OPERATION:
            object(expression->id, "unary operator", string_unary_operator(expression->unary_operation));
            print_expression(expression->right_expression);
            child(expression->id, expression->right_expression->id, "operand");
            break;
        case EXPRESSION:
            print_expression(expression->left_expression);
            break;
        case FUNCTION_CALL:
            print_function_call(expression->function_call);
            break;
        case INDEXER:
            print_indexer(expression->indexer);
            break;
        case ID:
            object(expression->id, "identifier", expression->identifier);
            break;
        case LITERAL:
            print_literal(expression->literal);
            break;
    }
}

void print_expression_list(struct expression_list* expression_list) {
    if (expression_list == NULL) return;
    print_expression(expression_list->expression);
    rectangle(expression_list->id, "expression list");
    child(expression_list->id, expression_list->expression->id, "expression");
    if (expression_list->rest_expressions != NULL) {
        print_expression_list(expression_list->rest_expressions);
        child(expression_list->id, expression_list->rest_expressions->id, "...rest");
    }
}

void print_indexer(struct indexer* indexer) {
    if (indexer == NULL) return;
    print_expression(indexer->expression);
    print_expression_list(indexer->expressions_list);
    rectangle(indexer->id, "indexer");
    child(indexer->id, indexer->expression->id, "array");
    child(indexer->id, indexer->expressions_list->id, "indices");
}

void print_function_call(struct function_call* function_call) {
    if (function_call == NULL) return;
    print_expression(function_call->expression);
    rectangle(function_call->id, "function call");
    child(function_call->id, function_call->expression->id, "function");
    if (function_call->rest_expressions != NULL) {
        print_expression_list(function_call->rest_expressions);
        child(function_call->id, function_call->rest_expressions->id, "arguments");
    }
}

void print_statement(struct statement* statement) {
    if (statement == NULL) return;
    switch (statement->type) {
        case IF:
            print_expression(statement->expression);
            print_statement(statement->true_statement);
            rectangle(statement->id, "if statement");
            child(statement->id, statement->expression->id, "condition");
            child(statement->id, statement->true_statement->id, "then");
            if (statement->false_statement != NULL) {
                print_statement(statement->false_statement);
                child(statement->id, statement->false_statement->id, "else");
            }
            break;
        case WHILE:
            rectangle(statement->id, "while statement");
            print_expression(statement->expression);
            print_statements(statement->loop_statements);
            child(statement->id, statement->expression->id, "condition");
            child(statement->id, statement->loop_statements->id, "statements");
            break;
        case UNTIL:
            rectangle(statement->id, "until statement");
            print_expression(statement->expression);
            print_statements(statement->loop_statements);
            child(statement->id, statement->expression->id, "condition");
            child(statement->id, statement->loop_statements->id, "statements");
            break;
        case DO_WHILE:
            rectangle(statement->id, "do while statement");
            print_statement(statement->do_while_statement);
            print_expression(statement->expression);
            child(statement->id, statement->do_while_statement->id, "statements");
            child(statement->id, statement->expression->id, "condition");
            break;
        case DO_UNTIL:
            rectangle(statement->id, "do until statement");
            print_statement(statement->do_while_statement);
            print_expression(statement->expression);
            child(statement->id, statement->do_while_statement->id, "statements");
            child(statement->id, statement->expression->id, "condition");
            break;
        case BREAK:
            rectangle(statement->id, "break");
            break;
        case EXPR:
            print_expression(statement->expression);
            break;
        case STMT:
            rectangle(statement->id, "block");
            print_statements_or_source_items(statement->statements_or_src_items_block);
            child(statement->id, statement->statements_or_src_items_block->id, "statements");
            break;
    }
}

void print_statements_or_source_items(struct statements_or_source_items* statements_or_source_items) {
    if (statements_or_source_items == NULL) return;
    rectangle(statements_or_source_items->id, "statements/source items");
    switch (statements_or_source_items->type) {
        case STATEMENT:
            print_statement(statements_or_source_items->statement);
            child(statements_or_source_items->id, statements_or_source_items->statement->id, "statement");
            break;
        case SOURCE_ITEM:
            print_source_item(statements_or_source_items->source_item);
            child(statements_or_source_items->id, statements_or_source_items->source_item->id, "source item");
            break;
    }
    print_statements_or_source_items(statements_or_source_items->rest_stmts_or_src_items);
    if (statements_or_source_items->rest_stmts_or_src_items != NULL)
        child(statements_or_source_items->id, statements_or_source_items->rest_stmts_or_src_items->id, "...rest");
}

void print_statements(struct statements* statements) {
    if (statements == NULL) return;
    print_statement(statements->statement);
    print_statements(statements->rest_statements);
    rectangle(statements->id, "statements");
    child(statements->id, statements->statement->id, "statement");
    if (statements->rest_statements != NULL)
        child(statements->id, statements->rest_statements->id, "...statements");
}

void print_source_item(struct source_item* source_item) {
    if (source_item == NULL) return;
    print_function_signature(source_item->function_signature);
    print_statements(source_item->statements);
    rectangle(source_item->id, "function");
    child(source_item->id, source_item->function_signature->id, "signature");
    child(source_item->id, source_item->statements->id, "body");
}

char* string_typeref_type(enum typeref_enum typeref_type) {
    switch (typeref_type) {
        case TYPEREF_BOOL:
            return "bool";
        case TYPEREF_BYTE:
            return "byte";
        case TYPEREF_INT:
            return "int";
        case TYPEREF_UINT:
            return "uint";
        case TYPEREF_LONG:
            return "long";
        case TYPEREF_ULONG:
            return "ulong";
        case TYPEREF_CHAR:
            return "char";
        case TYPEREF_STRING:
            return "string";
        case TYPEREF_CUSTOM_TYPE:
            return "identifier";
        case TYPEREF_ARRAY:
            return "array";
    }
}

void print_typeref(struct typeref* typeref) {
    if (typeref == NULL) return;
    char* text = string_typeref_type(typeref->type);
    if (typeref->type == TYPEREF_CUSTOM_TYPE) {
        object(typeref->id, text, typeref->custom_type);
    } else if (typeref->type == TYPEREF_ARRAY) {
        fprintf(output_file, "object \"type\" as id%d {\n%s (%d)\n}\n",
                typeref->id, text, typeref->size);
        print_typeref(typeref->typeref);
        child(typeref->id, typeref->typeref->id, "array type");
    } else {
        object(typeref->id, "type", text);
    }
}

void print_argument(struct argument* argument) {
    if (argument == NULL) return;
    object(argument->id, "argument", argument->arg_identifier);
    if (argument->args_type != NULL) {
        print_typeref(argument->args_type);
        child(argument->id, argument->args_type->id, "type");
    }
}

void print_argument_list(struct argument_list* argument_list) {
    if (argument_list == NULL) return;
    print_argument(argument_list->argument);
    rectangle(argument_list->id, "argument list");
    child(argument_list->id, argument_list->argument->id, "argument");
    if (argument_list->arguments != NULL) {
        print_argument_list(argument_list->arguments);
        child(argument_list->id, argument_list->arguments->id, "...arguments");
    }
}

void print_function_signature(struct function_signature* function_signature) {
    if (function_signature == NULL) return;
    print_argument_list(function_signature->arguments_list);
    object(function_signature->id, "function signature", function_signature->identifier);
    if (function_signature->arguments_list != NULL)
        child(function_signature->id, function_signature->arguments_list->id, "arguments");
    if (function_signature->typeref != NULL) {
        print_typeref(function_signature->typeref);
        child(function_signature->id, function_signature->typeref->id, "type");
    }
}

void print_source_items(struct source_items* source_items) {
    if (source_items == NULL) return;
    print_source_item(source_items->source_item);
    print_source_items(source_items->rest_source_items);
    rectangle(source_items->id, "source items");
    child(source_items->id, source_items->source_item->id, "item");
    if (source_items->rest_source_items != NULL)
        child(source_items->id, source_items->rest_source_items->id, "...items");

}

void print_source(struct source* source) {
    if (source == NULL) return;
    print_source_items(source->source_items);
    rectangle(source->id, "source");
    child(source->id, source->source_items->id, "items");
}