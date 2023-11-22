#include <stdlib.h>

#include "include/ast.h"

struct expression_list* create_expression_list(struct expression* expression, struct expression_list* rest_expressions) {
    struct expression_list* result = calloc(1, sizeof(struct expression_list));
    result->id = id_counter++;
    result->expression = expression;
    result->rest_expressions = rest_expressions;
    return result;
};