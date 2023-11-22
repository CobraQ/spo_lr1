#include <stdlib.h>

#include "include/ast.h"

struct argument* create_argument(char* identifier, struct typeref* typeref) {
    struct argument* result = calloc(1, sizeof(struct argument));
    result->id = id_counter++;
    result->arg_identifier = identifier;
    result->args_type = typeref;
    return result;
};