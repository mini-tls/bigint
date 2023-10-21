bigint_compare_t = """
    // test {}
    bigint_from_hex(&int1, "{}", {}, {});
    bigint_from_hex(&int2, "{}", {}, {});
    if(bigint_compare(&int1, &int2) != {})
        return -1;
"""

bigint_not_t = """
    // test {}
    bigint_from_hex(&integer, "{}", {}, false);
    bigint_from_hex(&reference, "{}", {}, true);
    bigint_not(&integer);
    if(bigint_compare(&integer, &reference) != 0)
        return -1;
"""

bigint_and_t: str = """
    // test {}
    bigint_from_hex(&int1, "{}", {}, false);
    bigint_from_hex(&int2, "{}", {}, false);
    bigint_from_hex(&reference, "{}", {}, false);
    bigint_and(&integer, &int1, &int2);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;
"""

bigint_or_t: str = """
    // test {}
    bigint_from_hex(&int1, "{}", {}, false);
    bigint_from_hex(&int2, "{}", {}, false);
    bigint_from_hex(&reference, "{}", {}, false);
    bigint_or(&integer, &int1, &int2);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;
"""

bigint_xor_t: str = """
    // test {}
    bigint_from_hex(&int1, "{}", {}, false);
    bigint_from_hex(&int2, "{}", {}, false);
    bigint_from_hex(&reference, "{}", {}, false);
    bigint_xor(&integer, &int1, &int2);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;
"""

bigint_add_t: str = """
    // test {}
    bigint_from_hex(&summand1, "{}", {}, false);
    bigint_from_hex(&summand2, "{}", {}, false);
    bigint_from_hex(&reference, "{}", {}, false);
    bigint_add(&sum, &summand1, &summand2);
    if(bigint_compare(&reference, &sum) != 0)
        return -1;
"""

bigint_subtract_t: str = """
    // test {}
    bigint_from_hex(&minuend, "{}", {}, false);
    bigint_from_hex(&subtrahend, "{}", {}, false);
    bigint_from_hex(&reference, "{}", {}, {});
    bigint_subtract(&difference, &minuend, &subtrahend);
    if(bigint_compare(&reference, &difference) != 0)
        return -1;
"""

bigint_shift_left_t: str = """
    // test {}
    bits = {};
    bigint_from_hex(&integer, "{}", {}, {});
    bigint_from_hex(&reference, "{}", {}, {});
    bigint_shift_left(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;
"""

bigint_shift_right_t: str = """
    // test {}
    bits = {};
    bigint_from_hex(&integer, "{}", {}, {});
    bigint_from_hex(&reference, "{}", {}, {});
    bigint_shift_right(&integer, bits);
    if(bigint_compare(&reference, &integer) != 0)
        return -1;
"""

bigint_multiply_t: str = """
    // test {}
    bigint_from_hex(&factor1, "{}", {}, false);
    bigint_from_hex(&factor2, "{}", {}, false);
    bigint_from_hex(&reference, "{}", {}, false);
    bigint_multiply(&product, &factor1, &factor2);
    if(bigint_compare(&reference, &product) != 0)
        return -1;
"""