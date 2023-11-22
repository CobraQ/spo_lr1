#include <stdlib.h>

#include "include/ast.h"

struct source_item* create_source_item(struct function_signature* function_signature, struct statements* statements) {
    struct source_item* result = calloc(1, sizeof(struct source_item));
    result->id = id_counter++;
    result->function_signature = function_signature;
    result->statements = statements;
    return result;
};