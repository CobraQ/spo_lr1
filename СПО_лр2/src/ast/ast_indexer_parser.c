#include <stdlib.h>

#include "include/ast.h"

struct indexer* create_indexer(struct expression* expression, struct expression_list* expressions_list) {
    struct indexer* result = calloc(1, sizeof(struct indexer));
    result->id = id_counter++;
    result->expression = expression;
    result->expressions_list = expressions_list;
    return result;
};