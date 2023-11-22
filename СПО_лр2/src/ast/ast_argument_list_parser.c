#include <stdlib.h>

#include "include/ast.h"

struct argument_list* create_argument_list(struct argument* arg, struct argument_list* args) {
    struct argument_list* result = calloc(1, sizeof(struct argument_list));
    result->id = id_counter++;
    result->argument = arg;
    result->arguments = args;
    return result;
}