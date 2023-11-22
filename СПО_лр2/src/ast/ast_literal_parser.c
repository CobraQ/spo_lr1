#include <stdlib.h>

#include "include/ast.h"

struct literal* create_literal_bool(bool value) {
    struct literal* result = calloc(1, sizeof(struct literal));
    result->type = LITERAL_BOOL;
    result->id = id_counter++;
    result->boolean = value;
    return result;
};

struct literal* create_literal_number(enum literal_enum type, int64_t value) {
    struct literal* result = calloc(1, sizeof(struct literal));
    result->type = type;
    result->id = id_counter++;
    result->number = value;
    return result;
};

struct literal* create_literal_string(char* value) {
    struct literal* result = calloc(1, sizeof(struct literal));
    result->type = LITERAL_STR;
    result->id = id_counter++;
    result->str = value;
    return result;
};

struct literal* create_literal_char(char value) {
    struct literal* result = calloc(1, sizeof(struct literal));
    result->type = LITERAL_CHAR;
    result->id = id_counter++;
    result->symbol = value;
    return result;
}

