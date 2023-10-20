cmake_minimum_required(VERSION 3.26)
project(bigint C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(bigint
        main.c
        include/types.h
        include/bigint.h
        include/tests.h
        src/bigint_arithmetic.c
        src/bigint_utils.c
        test/test.c
        test/bigint_compare.c
        test/bigint_add.c
        test/bigint_subtract.c
        test/bigint_shift_left.c
        test/bigint_shift_right.c
)
