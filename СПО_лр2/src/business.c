#include "parser.tab.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <business.h>
#include <parser_utils.h>
#include <libgen.h>
#include <control_flow.h>
#include "ast.h"
#include "uml_utils.h"
#include "ast_utils.h"

extern FILE *yyin;
FILE* output_file;
int id_counter = 0;

void cleanup() {
    for (int i = 0; i < error_count; i++) {
        if (errors[i].message) {
            free(errors[i].message);
        }
    }
    if (errors)
        free(errors);
}

void do_magic(const char* input_filename, const char* output_directory) {
    printf("Processing file %s\n", input_filename);
    char* input_filename_copy = NULL;

    if (!output_directory) {
        input_filename_copy = strdup(input_filename);
        output_directory = dirname(input_filename_copy);
    }

    FILE* input_file = fopen(input_filename, "r");
    if (!input_file) {
        perror("Error opening input file");
        exit(1);
    }
    yyin = input_file;  // Tell Flex to read from input_file instead of default stdin

    // yydebug = 1;  // Enable debug mode for Flex
    error_count = 0;
    errors = NULL;
    int parse_result = yyparse();
    if (parse_result) {
        fprintf(stderr, "Parsing failed.\n");
        fseek(input_file, 0, SEEK_SET);
        FileLines* file_lines = create_file_lines(input_file);

        for (int i = 0; i < error_count; i++) {
            print_parsing_error(&errors[i], file_lines);
        }

        destroy_file_lines(file_lines);
    } else {
        print_control_flow(input_filename, ast, output_directory);
        printf("Success!\n");
    }

    if (input_filename_copy) {
        free(input_filename_copy);
    }

    free_source(ast);
    fclose(input_file);
    cleanup();
}

void print_parsing_error(ParseError* error, FileLines* file_lines) {
    if (!error) {
        fprintf(stderr, "Error is NULL\n");
        return;
    }
    fprintf(stderr, "Error at line %d, column %d: %s\n", error->line, error->column - error->token_length, error->message);
    if (!file_lines || error->line < 1 || error->line > file_lines->n_lines) {
        return;
    }
    // Print the line where the error occurred
    int line = error->line;
    int column_start = error->column - error->token_length;
    int column_end = error->column - 1;
    char* line_text = file_lines->file_lines[line - 1];
    fprintf(stderr, "%4d | ", line);
    for (int i = 0; i < column_start - 1; i++) {
        fputc(line_text[i], stderr);
    }
    fprintf(stderr, "\033[31m");
    for (int i = column_start - 1; i < column_end; i++) {
        fputc(line_text[i], stderr);
    }
    fprintf(stderr, "\033[0m");
    if (column_end < strlen(line_text) - 1) {
        fprintf(stderr, "%s\n", &line_text[column_end]);
    } else {
        fprintf(stderr, "\n");
    }
    fprintf(stderr, "     | ");
    for (int i = 0; i < column_start - 1; i++) {
        fprintf(stderr, " ");
    }
    fprintf(stderr, "\033[31m");
    for (int i = column_start; i <= column_end; i++) {
        fprintf(stderr, "^");
    }
    fprintf(stderr, "\033[0m");
    fprintf(stderr, "\n");
}

FileLines* create_file_lines(FILE* file) {
    if (!file) {
        perror("File is NULL");
        exit(1);
    }
    FileLines* result = calloc(1, sizeof(FileLines));
    char* line = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, file)) != -1) {
        result->file_lines = realloc(result->file_lines, (result->n_lines + 1) * sizeof(char*));
        if (!result->file_lines) {
            perror("Program could not allocate memory");
            exit(1);
        }
        if (line[strlen(line) - 1] == '\n')
            line[strlen(line) - 1] = '\0';  // Remove trailing '\n' from line
        result->file_lines[result->n_lines] = strdup(line);
        if (!result->file_lines[result->n_lines]) {
            perror("Program could not allocate memory");
            exit(1);
        }
        result->n_lines++;
    }
    free(line);
    return result;
}

void destroy_file_lines(FileLines* file_lines) {
    if (!file_lines) {
        return;
    }
    for (int i = 0; i < file_lines->n_lines; i++) {
        if (file_lines->file_lines[i]) {
            free(file_lines->file_lines[i]);
        }
    }
    free(file_lines->file_lines);
    free(file_lines);
}
