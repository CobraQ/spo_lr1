cmake_minimum_required(VERSION 3.26)
project(1 C)

set(CMAKE_C_STANDARD 11)

add_executable(1 main.c
        main.h
        tree.h
        tree.c
        error.h
        error.c
        parser.tab.c
        pars.tab.c
)
