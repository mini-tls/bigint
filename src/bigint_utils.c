//
// Created by sascha on 20.10.23.
//

#include "../include/bigint.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const bigint one = {{1}};

static void bigint_complement(bigint *integer) {
    for(int i = 0; i < BIGINT_MAX_WORDS; i++)
        integer->words[i] = ~integer->words[i];
    bigint_add(integer, integer, &one);
}

void bigint_set_zero(bigint *integer) {
    memset(integer->words, 0x00, BIGINT_MAX_WORDS*sizeof(u32));
}

void bigint_from_hex(bigint *integer, const char *hex, u32 h_len, bool negative) {
    bigint_set_zero(integer);

    for(int i = 0; i < (h_len < BIGINT_WORDS * 8? h_len : BIGINT_WORDS * 8); i += 8) {
        int pointer = h_len - i - 8, n = 8;

        if(pointer < 0) {
            pointer = 0;
            n = h_len % 8;
        }

        char chunk[9] = {0};
        strncpy(chunk, hex + pointer, n);

        integer->words[i >> 3] = (u32) strtoll(chunk, NULL, 16);
    }

    if(negative)
        bigint_complement(integer);
}

void bigint_print(const bigint* integer) {
    bigint tmp;
    bigint_copy(&tmp, integer);
    if(bigint_is_negative(integer)) {
        bigint_complement(&tmp);
        printf("-");
    } else {
        printf(" ");
    }
    bigint_unsigned_print(&tmp);
}

void bigint_unsigned_print(const bigint *integer) {
    for(int i = BIGINT_MAX_WORDS - 1; i > 0; i--)
        if(integer->words[i-1] != 0)
            printf("%08x ", integer->words[i-1]);
    printf("\n");
}

void bigint_copy(bigint *integer, const bigint *src) {
    *integer = *src;
}

int bigint_compare(const bigint *a,const bigint *b) {
    bigint cmp;
    bigint_subtract(&cmp, a, b);
    if(bigint_is_negative(&cmp))
        return -1;
    if(bigint_is_zero(&cmp))
        return 0;
    return 1;
}

bool bigint_is_zero(const bigint *integer) {
    for(int i = 0; i < BIGINT_MAX_WORDS; i++)
        if(integer->words[i] != 0)
            return false;
    return true;
}

bool bigint_is_negative(const bigint *integer) {
    return integer->words[BIGINT_MAX_WORDS - 1] >> 31 == 1;
}