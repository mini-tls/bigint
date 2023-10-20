//
// Created by sascha on 20.10.23.
//

#include "../include/bigint.h"

void bigint_add(bigint *integer, const bigint *a, const bigint *b) {
    bigint bsum;
    bigint_set_zero(&bsum);

    u32 carry = 0;
    for(int i = 0; i < BIGINT_MAX_WORDS; i++) {
        u64 sum = (u64) a->words[i] + (u64) b->words[i] + (u64) carry;
        bsum.words[i] = (u32)sum;
        carry = (u32)(sum >> 32);
    }

    bigint_copy(integer, &bsum);
}

void bigint_subtract(bigint *integer, const bigint *a, const bigint *b) {
    bigint bdiff;
    bigint_set_zero(&bdiff);

    u32 carry = 0;
    for(int i = 0; i < BIGINT_MAX_WORDS; i++) {
        u64 tmp = (u64)a->words[i] - (u64)b->words[i] - carry;
        bdiff.words[i] = (u32)tmp;
        carry = (tmp >> 32 == 0) ? 0 : 1;
    }

    bigint_copy(integer, &bdiff);
}

void bigint_shift_left(bigint *integer, u32 bits) {
    bigint tmp;
    bigint_set_zero(&tmp);

    if(bits > BIGINT_WORD_SIZE) {
        u32 wordshift = bits / BIGINT_WORD_SIZE;
        for(int i = BIGINT_MAX_WORDS - 1; i >= wordshift; i--)
            tmp.words[i] = integer->words[i - wordshift];

        bits %= BIGINT_WORD_SIZE;
    } else {
        bigint_copy(&tmp, integer);
    }

    if(bits != 0){
        for(int i = BIGINT_MAX_WORDS - 1; i > 0; i--)
            tmp.words[i] = (tmp.words[i] << bits) | (tmp.words[i - 1] >> (BIGINT_WORD_SIZE - bits));
        tmp.words[0] <<= bits;
    }

    bigint_copy(integer, &tmp);
}

void bigint_shift_right(bigint *integer, u32 bits) {
    bigint tmp;
    bigint_set_zero(&tmp);

    if(bits > BIGINT_WORD_SIZE) {
        u32 wordshift = bits / BIGINT_WORD_SIZE;
        for(int i = 0; i < BIGINT_MAX_WORDS - wordshift; i++)
            tmp.words[i] = integer->words[i + wordshift];

        bits %= BIGINT_WORD_SIZE;
    } else {
        bigint_copy(&tmp, integer);
    }

    if(bits != 0){
        for(int i = 0 ; i < BIGINT_MAX_WORDS - 1; i++)
            tmp.words[i] = (tmp.words[i] >> bits) | (tmp.words[i + 1] << (BIGINT_WORD_SIZE - bits));
        tmp.words[BIGINT_MAX_WORDS - 1] >>= bits;
    }

    bigint_copy(integer, &tmp);
}