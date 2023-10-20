//
// Created by sascha on 20.10.23.
//

#ifndef BIGINT_BIGINT_H
#define BIGINT_BIGINT_H

#include "types.h"
#include <stdbool.h>
#include <stddef.h>

#ifndef BIGINT_WORD_SIZE
#define BIGINT_WORD_SIZE 32
#endif

#ifndef BIGINT_MAX_BITS
#define BIGINT_MAX_BITS 2048
#endif

#define BIGINT_WORDS (BIGINT_MAX_BITS / BIGINT_WORD_SIZE)

#define BIGINT_MAX_WORDS (2*BIGINT_WORDS+1)

#if BIGINT_WORD_SIZE == 64
typedef u64 bigint_word;
#elif BIGINT_WORD_SIZE == 32
typedef u32 bigint_word;
#elif BIGINT_WORD_SIZE == 16
typedef u16 bigint_word;
#elif BIGINT_WORD_SIZE == 8
    typedef u8 bigint_word;
#else
    #error Unsupported BIGINT_WORD_SIZE
#endif

typedef struct {
    bigint_word words[BIGINT_MAX_WORDS];
} bigint;

// bigint_utils.c
void bigint_set_zero(bigint *integer);
void bigint_from_hex(bigint *integer, const char *hex, u32 h_len, bool negative);
void bigint_print(const bigint *integer);
void bigint_unsigned_print(const bigint *integer);
void bigint_copy(bigint *integer, const bigint *src);
bool bigint_is_zero(const bigint *integer);
bool bigint_is_negative(const bigint *integer);

// bigint_arithmetic.c
void bigint_add(bigint *integer, const bigint *a, const bigint *b);
void bigint_subtract(bigint *integer, const bigint *a, const bigint *b);
void bigint_shift_left(bigint *integer, u32 bits);
void bigint_shift_right(bigint *integer, u32 bits);

#endif //BIGINT_BIGINT_H
