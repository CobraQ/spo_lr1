#include <stdlib.h>

#include "include/ast.h"

struct statements* create_statements(struct statement* statement, struct statements* rest_statements) {
    struct statements* result = calloc(1, sizeof(struct statements));
    result->id = id_counter++;
    result->statement = statement;
    result->rest_statements = rest_statements;
    return result;
};