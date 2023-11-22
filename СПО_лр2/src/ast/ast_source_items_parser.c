#include <stdlib.h>

#include "include/ast.h"

struct source_items* create_source_items(struct source_item* source_item, struct source_items* rest_source_items) {
    struct source_items* result = calloc(1, sizeof(struct source_items));
    result->id = id_counter++;
    result->source_item = source_item;
    result->rest_source_items = rest_source_items;
    return result;
};