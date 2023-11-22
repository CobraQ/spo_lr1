#include <stdlib.h>

#include "include/ast.h"

struct function_call* create_function_call(struct expression* expression, struct expression_list* rest_expressions) {
    struct function_call* result = calloc(1, sizeof(struct function_call));
    result->id = id_counter++;
    result->expression = expression;
    result->rest_expressions = rest_expressions;
    return result;
};