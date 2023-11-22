#include <stdlib.h>

#include "include/ast.h"

struct source* create_source(struct source_items* source_items) {
    struct source* result = calloc(1, sizeof(struct source));
    result->id = id_counter++;
    result->source_items = source_items;
    return result;
};