#include <stdlib.h>

#include "include/ast.h"

struct function_signature* create_function_signature(char* identifier, struct argument_list* arg_list, struct typeref* typeref) {
    struct function_signature* result = calloc(1, sizeof(struct function_signature));
    result->id = id_counter++;
    result->identifier = identifier;
    result->arguments_list = arg_list;
    result->typeref = typeref;
    return result;
};