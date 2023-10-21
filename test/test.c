//
// Created by sascha on 20.10.23.
//

#include "../include/tests.h"

int test_all() {
    if(test_bigint_compare() == -1) {
        printf("bigint_compare() failed...");
        return -1;
    }
    if(test_bigint_not() == -1) {
        printf("bigint_not() failed...");
        return -1;
    }
    if(test_bigint_and() == -1) {
        printf("bigint_and() failed...");
        return -1;
    }
    if(test_bigint_or() == -1) {
        printf("bigint_or() failed...");
        return -1;
    }
    if(test_bigint_xor() == -1) {
        printf("bigint_xor() failed...");
        return -1;
    }
    if(test_bigint_add() == -1) {
        printf("bigint_add() failed...");
        return -1;
    }
    if(test_bigint_subtract() == -1) {
        printf("bigint_subtract() failed...");
        return -1;
    }
    if(test_bigint_shift_left() == -1) {
        printf("bigint_shift_left() failed...");
        return -1;
    }
    if(test_bigint_shift_right() == -1) {
        printf("bigint_shift_right() failed...");
        return -1;
    }
    if(test_bigint_multiply() == -1) {
        printf("bigint_multiply() failed...");
        return -1;
    }
    return 0;
}