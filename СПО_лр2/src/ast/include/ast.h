#pragma once

#include <stdbool.h>
#include <inttypes.h>

extern int id_counter;
extern struct source* ast;

enum unary_operation_enum {
    UNARY_OP_PLUS,
    UNARY_OP_MINUS
};

enum binary_operation_enum {
    BINARY_OP_ADD,
    BINARY_OP_SUB,
    BINARY_OP_MUL,
    BINARY_OP_DIV,
    BINARY_OP_DIV_REMAINDER,
    BINARY_OP_ASSIGNMENT,
    BINARY_OP_EQ,
    BINARY_OP_NOT_EQ,
    BINARY_OP_GT,
    BINARY_OP_GE,
    BINARY_OP_LT,
    BINARY_OP_LE
};

struct argument {
    int id;
    struct typeref* args_type;
    char* arg_identifier;
};
struct argument* create_argument(char* identifier, struct typeref* typeref);

struct argument_list {
    int id;
    struct argument* argument;
    struct argument_list* arguments;
};
struct argument_list* create_argument_list(struct argument* arg, struct argument_list* args);

enum expression_type {
    BINARY_OPERATION,
    UNARY_OPERATION,
    EXPRESSION,
    FUNCTION_CALL,
    INDEXER,
    ID,
    LITERAL
};

struct expression {
    int id;
    enum expression_type type;
    struct expression* left_expression;
    struct expression* right_expression;
    enum binary_operation_enum binary_operation;
    enum unary_operation_enum unary_operation;
    struct function_call* function_call;
    struct indexer* indexer;
    char* identifier;
    struct literal* literal;
};

struct expression* create_binary_operation_expression(
        struct expression* left_expression,
        struct expression* right_expression,
        enum binary_operation_enum binary_operation
);

struct expression* create_unary_operation_expression(
        struct expression* right_expression,
        enum unary_operation_enum unary_operation
);

struct expression* create_expression_expression(
        struct expression* left_expression
);

struct expression* create_function_call_expression(
        struct function_call* function_call
);

struct expression* create_indexer_expression(
        struct indexer* indexer
);

struct expression* create_identifier_expression(
        char* identifier
);

struct expression* create_literal_expression(
        struct literal* literal
);

struct expression_list {
    int id;
    struct expression* expression;
    struct expression_list* rest_expressions;
};
struct expression_list* create_expression_list(struct expression* expression, struct expression_list* rest_expressions);

struct function_call {
    int id;
    struct expression* expression;
    struct expression_list* rest_expressions;
};
struct function_call* create_function_call(struct expression* expression, struct expression_list* rest_expressions);

struct function_signature {
    int id;
    char* identifier;
    struct argument_list* arguments_list;
    struct typeref* typeref;
};

struct function_signature* create_function_signature(char* identifier, struct argument_list* arg_list, struct typeref* typeref);

struct indexer {
    int id;
    struct expression* expression;
    struct expression_list* expressions_list;
};
struct indexer* create_indexer(struct expression* expression, struct expression_list* expressions_list);

enum literal_enum {
    LITERAL_BOOL,
    LITERAL_STR,
    LITERAL_CHAR,
    LITERAL_HEX,
    LITERAL_BITS,
    LITERAL_DEC
};

struct literal {
    int id;
    enum literal_enum type;
    char* str;
    char symbol;
    int64_t number;
    bool boolean;
};

struct literal* create_literal_bool(bool value);
struct literal* create_literal_number(enum literal_enum type, int64_t value);
struct literal* create_literal_string(char* value);
struct literal* create_literal_char(char value);

struct source {
    int id;
    struct source_items* source_items;
};
struct source* create_source(struct source_items* source_items);

struct source_item {
    int id;
    struct function_signature* function_signature;
    struct statements* statements;
};
struct source_item* create_source_item(struct function_signature* function_signature, struct statements* statements);

struct source_items {
    int id;
    struct source_item* source_item;
    struct source_items* rest_source_items;
};
struct source_items* create_source_items(struct source_item* source_item, struct source_items* rest_source_items);

enum statement_type {
    IF, WHILE, UNTIL, DO_WHILE, DO_UNTIL, BREAK,
    EXPR, STMT
};

struct statement {
    int id;
    enum statement_type type;
    struct expression* expression;
    struct statement* true_statement;
    struct statement* false_statement;
    struct statements* loop_statements;
    struct statement* do_while_statement;
    struct statements_or_source_items* statements_or_src_items_block;
};

struct statement* create_if_statement(struct expression* expression, struct statement* true_statement, struct statement* false_statement);
struct statement* create_while_statement(struct expression* expression, struct statements* loop_statements);
struct statement* create_until_statement(struct expression* expression, struct statements* loop_statements);
struct statement* create_do_while_statement(struct statement* do_while_statement, struct expression* expression);
struct statement* create_do_until_statement(struct statement* do_while_statement, struct expression* expression);
struct statement* create_break_statement();
struct statement* create_expr_statement(struct expression* expression);
struct statement* create_stmt_statement(struct statements_or_source_items* statements_or_src_items_block);

enum statements_or_source_items_type {
    STATEMENT,
    SOURCE_ITEM
};

struct statements_or_source_items {
    int id;
    enum statements_or_source_items_type type;
    struct statement* statement;
    struct source_item* source_item;
    struct statements_or_source_items* rest_stmts_or_src_items;
};
struct statements_or_source_items* create_statements_or_source_items_statements(struct statement* statement, struct statements_or_source_items* rest_stmts_or_src_items);
struct statements_or_source_items* create_statements_or_source_items_items(struct source_item* source_item, struct statements_or_source_items* rest_stmts_or_src_items);

struct statements {
    int id;
    struct statement* statement;
    struct statements* rest_statements;
};
struct statements* create_statements(struct statement* statement, struct statements* rest_statements);

enum typeref_enum {
    TYPEREF_BOOL,
    TYPEREF_BYTE,
    TYPEREF_INT,
    TYPEREF_UINT,
    TYPEREF_LONG,
    TYPEREF_ULONG,
    TYPEREF_CHAR,
    TYPEREF_STRING,
    TYPEREF_CUSTOM_TYPE,
    TYPEREF_ARRAY
};

struct typeref {
    int id;
    enum typeref_enum type;
    char* custom_type;
    struct typeref* typeref;
    int size;
};

struct typeref* create_typeref_bool();
struct typeref* create_typeref_byte();
struct typeref* create_typeref_int();
struct typeref* create_typeref_uint();
struct typeref* create_typeref_long();
struct typeref* create_typeref_ulong();
struct typeref* create_typeref_char();
struct typeref* create_typeref_string();
struct typeref* create_typeref_custom_type(char* type);
struct typeref* create_typeref_array(struct typeref* typeref, int size);

