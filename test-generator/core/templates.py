bigint_compare_t = """
    // test {}
    bigint_from_hex(&int1, "{}", {}, {});
    bigint_from_hex(&int2, "{}", {}, {});
    if(bigint_compare(&int1, &int2) != {})
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