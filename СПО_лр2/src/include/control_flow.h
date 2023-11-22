#pragma once

#include <ast.h>

struct ControlFlowContext {
    char** existing_names;
    int num_existing_names;
    int error;
    const char* input_path;
    const char* output_directory;
};

void print_control_flow(const char* input_filename, struct source* ast, const char* output_directory);
