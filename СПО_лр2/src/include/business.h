#pragma once

#include <parser_utils.h>

typedef struct {
    char** file_lines;
    int n_lines;
} FileLines;

void do_magic(const char* input_filename, const char* output_filename);
void print_parsing_error(ParseError* error, FileLines* file_lines);
FileLines* create_file_lines(FILE* file);
void destroy_file_lines(FileLines* file_lines);