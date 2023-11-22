#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

#include <business.h>

void print_help(const char *exec_name) {
    printf("Usage: %s --in <input_files> --out <output_directory>\n", exec_name);
    printf("Options:\n");
    printf("  --in   <input_files>        Specify the input file.\n");
    printf("  --out  <output_directory>   Specify the output directory.\n");
    printf("  --help                      Display this help message.\n");
}

int main(int argc, char *argv[]) {
    int opt;
    char **input_files = NULL;
    int num_input_files = 0;
    char *output_directory = NULL;

    static struct option long_options[] = {
        {"in",   required_argument, 0, 'i'},
        {"out",  required_argument, 0, 'o'},
        {"help", no_argument,       0, 'h'},
        {0,      0,                 0,  0 }
    };

    int long_index = 0;
    while ((opt = getopt_long(argc, argv, "i:o:h", long_options, &long_index)) != -1) {
        switch (opt) {
            case 'i':
                num_input_files = 1;
                input_files = &argv[optind - 1];
                while (optind < argc && argv[optind][0] != '-') {
                    num_input_files++;
                    optind++;
                }
                break;
            case 'o':
                output_directory = optarg;
                break;
            case 'h':
                print_help(argv[0]);
                return EXIT_SUCCESS;
            default:
                print_help(argv[0]);
                return EXIT_FAILURE;
            }
    }

    if (!input_files) {
        fprintf(stderr, "--in is required.\n");
        print_help(argv[0]);
        return EXIT_FAILURE;
    }

    for (int i = 0; i < num_input_files; ++i) {
        do_magic(input_files[i], output_directory);
    }

    return 0;
}
