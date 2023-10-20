//
// Created by sascha on 20.10.23.
//

#include "../include/tests.h"

int test_all() {
    if(test_bigint_compare() == -1) {
        printf("bigint_compare() failed...");
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
    return 0;
}