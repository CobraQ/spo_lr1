#include <stdlib.h>

#include "include/ast.h"

struct statement* create_if_statement(struct expression* expression, struct statement* true_statement, struct statement* false_statement) {
    struct statement* result = calloc(1, sizeof(struct statement));
    result->id = id_counter++;
    result->expression = expression;
    result->true_statement = true_statement;
    result->false_statement = false_statement;
    result->type = IF;
    return result;
};

struct statement* create_while_statement(struct expression* expression, struct statements* loop_statements) {
    struct statement* result = calloc(1, sizeof(struct statement));
    result->id = id_counter++;
    result->expression = expression;
    result->loop_statements = loop_statements;
    result->type = WHILE;
    return result;
};

struct statement* create_until_statement(struct expression* expression, struct statements* loop_statements) {
    struct statement* result = calloc(1, sizeof(struct statement));
    result->id = id_counter++;
    result->expression = expression;
    result->loop_statements = loop_statements;
    result->type = UNTIL;
    return result;
};

struct statement* create_do_while_statement(struct statement* do_while_statement, struct expression* expression) {
    struct statement* result = calloc(1, sizeof(struct statement));
    result->id = id_counter++;
    result->expression = expression;
    result->do_while_statement = do_while_statement;
    result->type = DO_WHILE;
    return result;
};

struct statement* create_do_until_statement(struct statement* do_while_statement, struct expression* expression) {
    struct statement* result = calloc(1, sizeof(struct statement));
    result->id = id_counter++;
    result->expression = expression;
    result->do_while_statement = do_while_statement;
    result->type = DO_UNTIL;
    return result;
};

struct statement* create_break_statement() {
    struct statement* result = calloc(1, sizeof(struct statement));
    result->id = id_counter++;
    result->type = BREAK;
    return result;
};

struct statement* create_expr_statement(struct expression* expression) {
    struct statement* result = calloc(1, sizeof(struct statement));
    result->id = expression->id;
    result->expression = expression;
    result->type = EXPR;
    return result;
};

struct statement* create_stmt_statement(struct statements_or_source_items* statements_or_src_items_block) {
    struct statement* result = calloc(1, sizeof(struct statement));
    result->id = id_counter++;
    result->statements_or_src_items_block = statements_or_src_items_block;
    result->type = STMT;
    return result;
};