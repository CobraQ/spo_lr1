#include <stdlib.h>

#include "include/ast.h"

struct expression* create_binary_operation_expression(
        struct expression* left_expression,
        struct expression* right_expression,
        enum binary_operation_enum binary_operation
) {
    struct expression* result = calloc(1, sizeof(struct expression));
    result->type = BINARY_OPERATION;
    result->id = id_counter++;
    result->left_expression = left_expression;
    result->right_expression = right_expression;
    result->binary_operation = binary_operation;
    return result;
};

struct expression* create_unary_operation_expression(
        struct expression* right_expression,
        enum unary_operation_enum unary_operation
) {
    struct expression* result = calloc(1, sizeof(struct expression));
    result->type = UNARY_OPERATION;
    result->id = id_counter++;
    result->right_expression = right_expression;
    result->unary_operation = unary_operation;
    return result;
};

struct expression* create_expression_expression(
        struct expression* left_expression
) {
    struct expression* result = calloc(1, sizeof(struct expression));
    result->type = EXPRESSION;
    result->id = left_expression->id;
    result->left_expression = left_expression;
    return result;
};

struct expression* create_function_call_expression(
        struct function_call* function_call
) {
    struct expression* result = calloc(1, sizeof(struct expression));
    result->type = FUNCTION_CALL;
    result->id = function_call->id;
    result->function_call = function_call;
    return result;
};

struct expression* create_indexer_expression(
        struct indexer* indexer
) {
    struct expression* result = calloc(1, sizeof(struct expression));
    result->type = INDEXER;
    result->id = indexer->id;
    result->indexer = indexer;
    return result;
};

struct expression* create_identifier_expression(
        char* identifier
) {
    struct expression* result = calloc(1, sizeof(struct expression));
    result->type = ID;
    result->id = id_counter++;
    result->identifier = identifier;
    return result;
};

struct expression* create_literal_expression(
        struct literal* literal
) {
    struct expression* result = calloc(1, sizeof(struct expression));
    result->type = LITERAL;
    result->id = literal->id;
    result->literal = literal;
    return result;
};

