#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <parser_utils.h>
#include "ast.h"

extern FILE* output_file;

void child(int id, int child, const char* text);

void object(int id, const char* title, const char* text);

void rectangle(int id, const char* title);

void print_source(struct source* source);