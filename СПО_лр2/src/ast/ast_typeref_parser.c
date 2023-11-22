#include <stdlib.h>

#include "include/ast.h"

struct typeref* create_typeref_bool() {
    struct typeref* result = calloc(1, sizeof(struct typeref));
    result->type = TYPEREF_BOOL;
    result->id = id_counter++;
    return result;
};
struct typeref* create_typeref_byte() {
    struct typeref* result = calloc(1, sizeof(struct typeref));
    result->type = TYPEREF_BYTE;
    result->id = id_counter++;
    return result;
};
struct typeref* create_typeref_int() {
    struct typeref* result = calloc(1, sizeof(struct typeref));
    result->type = TYPEREF_INT;
    result->id = id_counter++;
    return result;
};
struct typeref* create_typeref_uint() {
    struct typeref* result = calloc(1, sizeof(struct typeref));
    result->type = TYPEREF_UINT;
    result->id = id_counter++;
    return result;
};
struct typeref* create_typeref_long() {
    struct typeref* result = calloc(1, sizeof(struct typeref));
    result->type = TYPEREF_LONG;
    result->id = id_counter++;
    return result;
};
struct typeref* create_typeref_ulong() {
    struct typeref* result = calloc(1, sizeof(struct typeref));
    result->type = TYPEREF_ULONG;
    result->id = id_counter++;
    return result;
};
struct typeref* create_typeref_char() {
    struct typeref* result = calloc(1, sizeof(struct typeref));
    result->type = TYPEREF_CHAR;
    result->id = id_counter++;
    return result;
};
struct typeref* create_typeref_string() {
    struct typeref* result = calloc(1, sizeof(struct typeref));
    result->type = TYPEREF_STRING;
    result->id = id_counter++;
    return result;
};
struct typeref* create_typeref_custom_type(char* type) {
    struct typeref* result = calloc(1, sizeof(struct typeref));
    result->type = TYPEREF_CUSTOM_TYPE;
    result->id = id_counter++;
    result->custom_type = type;
    return result;
};

struct typeref* create_typeref_array(struct typeref* typeref, int size) {
    struct typeref* result = calloc(1, sizeof(struct typeref));
    result->type = TYPEREF_ARRAY;
    result->id = id_counter++;
    result->typeref = typeref;
    result->size = size;
    return result;
};