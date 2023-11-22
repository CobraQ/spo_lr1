
cmake_minimum_required(VERSION 3.16)
project(app C)

set(CMAKE_C_STANDARD 11)

#set(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -fsanitize=address")
set(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -g3")
set(CMAKE_BUILD_TYPE Debug)

find_package(BISON)
find_package(FLEX)

BISON_TARGET(MyParser ${CMAKE_SOURCE_DIR}/parser/parser.y ${CMAKE_CURRENT_BINARY_DIR}/parser.tab.c)
FLEX_TARGET(MyScanner ${CMAKE_SOURCE_DIR}/lexer/lexer.l  ${CMAKE_CURRENT_BINARY_DIR}/lexer.yy.c)
ADD_FLEX_BISON_DEPENDENCY(MyScanner MyParser)

set(SOURCES
        src/main.c
        src/business.c
        src/parser_utils.c
        src/control_flow.c
        src/lib/mkdir_p.c
        src/ast/ast_literal_parser.c
        src/ast/ast_typeref_parser.c
        src/ast/ast_argument_parser.c
        src/ast/ast_argument_list_parser.c
        src/ast/ast_function_signature_parser.c
        src/ast/ast_function_call_parser.c
        src/ast/ast_indexer_parser.c
        src/ast/ast_expression_parser.c
        src/ast/ast_expression_list_parser.c
        src/ast/ast_statements_parser.c
        src/ast/ast_statement_or_source_items_parser.c
        src/ast/ast_statement_parser.c
        src/ast/ast_source_item_parser.c
        src/ast/ast_source_items_parser.c
        src/ast/ast_source_parser.c
        src/uml_writer.c
        src/ast_utils.c
)

set(HEADERS
        src/include/business.h
        src/include/parser_utils.h
        src/include/control_flow.h
        src/include/ast_utils.h
        src/include/lib/mkdir_p.h
        src/ast/include/ast.h)

include_directories(${PROJECT_SOURCE_DIR}/src/include)
include_directories(${PROJECT_SOURCE_DIR}/src/ast/include)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(app ${BISON_MyParser_OUTPUTS} ${FLEX_MyScanner_OUTPUTS} ${SOURCES})