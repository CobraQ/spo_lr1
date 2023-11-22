#include <ast_utils.h>

void free_function_signature(struct function_signature* function_signature);
void free_source_item(struct source_item* source_item);
void free_statements(struct statements* statements);
void free_statements_or_source_items(struct statements_or_source_items* statements_or_source_items);
void free_function_call(struct function_call* function_call);
void free_indexer(struct indexer* indexer);


void free_literal(struct literal* literal) {
    if (literal == NULL) return;
    free(literal->str);
    free(literal);
}

void free_expression(struct expression* expression) {
    if (expression == NULL) return;
    switch (expression->type) {
        case BINARY_OPERATION:
            free_expression(expression->left_expression);
            free_expression(expression->right_expression);
            break;
        case UNARY_OPERATION:
            free_expression(expression->right_expression);
            break;
        case EXPRESSION:
            free_expression(expression->left_expression);
            break;
        case FUNCTION_CALL:
            free_function_call(expression->function_call);
            break;
        case INDEXER:
            free_indexer(expression->indexer);
            break;
        case ID:
            free(expression->identifier);
            break;
        case LITERAL:
            free_literal(expression->literal);
            break;
    }
    free(expression);
}

void free_expression_list(struct expression_list* expression_list) {
    if (expression_list == NULL) return;
    if (expression_list->rest_expressions != NULL) {
        free_expression_list(expression_list->rest_expressions);
    }
    free_expression(expression_list->expression);
    free(expression_list);
}

void free_indexer(struct indexer* indexer) {
    if (indexer == NULL) return;
    free_expression(indexer->expression);
    free_expression_list(indexer->expressions_list);
    free(indexer);
}

void free_function_call(struct function_call* function_call) {
    if (function_call == NULL) return;
    free_expression(function_call->expression);
    if (function_call->rest_expressions != NULL)
        free_expression_list(function_call->rest_expressions);
    free(function_call);
}

void free_statement(struct statement* statement) {
    if (statement == NULL) return;
    switch (statement->type) {
        case IF:
            free_expression(statement->expression);
            free_statement(statement->true_statement);
            if (statement->false_statement != NULL) {
                free_statement(statement->false_statement);
            }
            break;
        case WHILE:
        case UNTIL:
            free_expression(statement->expression);
            free_statements(statement->loop_statements);
            break;
        case DO_WHILE:
        case DO_UNTIL:
            free_statement(statement->do_while_statement);
            free_expression(statement->expression);
            break;
        case BREAK:
            break;
        case EXPR:
            free_expression(statement->expression);
            break;
        case STMT:
            free_statements_or_source_items(statement->statements_or_src_items_block);
            break;
    }
    free(statement);
}

void free_statements_or_source_items(struct statements_or_source_items* statements_or_source_items) {
    if (statements_or_source_items == NULL) return;
    switch (statements_or_source_items->type) {
        case STATEMENT:
            free_statement(statements_or_source_items->statement);
            break;
        case SOURCE_ITEM:
            free_source_item(statements_or_source_items->source_item);
            break;
    }
    free_statements_or_source_items(statements_or_source_items->rest_stmts_or_src_items);
    free(statements_or_source_items);
}

void free_statements(struct statements* statements) {
    if (statements == NULL) return;
    free_statement(statements->statement);
    free_statements(statements->rest_statements);
    free(statements);
}

void free_source_item(struct source_item* source_item) {
    if (source_item == NULL) return;
    free_function_signature(source_item->function_signature);
    free_statements(source_item->statements);
    free(source_item);
}

void free_typeref(struct typeref* typeref) {
    if (typeref == NULL) return;
    if (typeref->type == TYPEREF_CUSTOM_TYPE) {
        free(typeref->custom_type);
    }
    if (typeref->type == TYPEREF_ARRAY) {
        free_typeref(typeref->typeref);
    }
    free(typeref);
}

void free_argument(struct argument* argument) {
    if (argument == NULL) return;
    free(argument->arg_identifier);
    if (argument->args_type != NULL) {
        free_typeref(argument->args_type);
    }
    free(argument);
}

void free_argument_list(struct argument_list* argument_list) {
    if (argument_list == NULL) return;
    free_argument(argument_list->argument);
    if (argument_list->arguments != NULL) {
        free_argument_list(argument_list->arguments);
    }
    free(argument_list);
}

void free_function_signature(struct function_signature* function_signature) {
    if (function_signature == NULL) return;
    free_argument_list(function_signature->arguments_list);
    free(function_signature->identifier);
    if (function_signature->typeref != NULL) {
        free_typeref(function_signature->typeref);
    }
    free(function_signature);
}

void free_source_items(struct source_items* source_items) {
    if (source_items == NULL) return;
    free_source_item(source_items->source_item);
    free_source_items(source_items->rest_source_items);
    free(source_items);
}

void free_source(struct source* source) {
    if (source == NULL) return;
    free_source_items(source->source_items);
    free(source);
}