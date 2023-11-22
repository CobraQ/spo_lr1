#include <stdlib.h>

#include "include/ast.h"

struct statements_or_source_items* create_statements_or_source_items_statements(struct statement* statement, struct statements_or_source_items* rest_stmts_or_src_items) {
    struct statements_or_source_items* result = calloc(1, sizeof(struct statements_or_source_items));
    result->type = STATEMENT;
    result->id = id_counter++;
    result->statement = statement;
    result->rest_stmts_or_src_items = rest_stmts_or_src_items;
    return result;
};
struct statements_or_source_items* create_statements_or_source_items_items(struct source_item* source_item, struct statements_or_source_items* rest_stmts_or_src_items) {
    struct statements_or_source_items* result = calloc(1, sizeof(struct statements_or_source_items));
    result->type = SOURCE_ITEM;
    result->id = id_counter++;
    result->source_item = source_item;
    result->rest_stmts_or_src_items = rest_stmts_or_src_items;
    return result;
};
