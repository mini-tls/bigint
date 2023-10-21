import os
import random

from Crypto.Random.random import getrandbits

from .templates import *
class Generator:
    def __init__(self, n: int = 100) -> None:
        self.n: int = n
        self.tests_path: str = "../test/"

    def bigint_compare(self) -> None:
        def oracle() -> bool:
            if (getrandbits(random.randint(1, 23)) % 2) == 0:
                return True
            return False

        path: str = os.path.join(self.tests_path, "bigint_compare.c")
        with open(path, "r") as inp:
            head: list = inp.readlines()[:8]

        tests: str = ""
        for i in range(self.n):
            tmp: str = bigint_compare_t

            f1: str = "false" if oracle() else "true"
            f2: str = "false" if oracle() else "true"

            if (oracle()):
                int1: int = getrandbits(random.randint(1, 2048))
                int2: int = getrandbits(random.randint(1, 2048))

                if (int1 > int2):
                    cmp: int = 1
                elif (int1 < int2):
                    cmp: int = -1
                else:
                    cmp: int = 0
            else:
                int1: int = getrandbits(random.randint(1, 2048))
                int2: int = int1
                cmp: int = 0

            tmp = tmp.format(
                str(i + 1),
                hex(int1)[2:],
                len(hex(int1)[2:]),
                "false",
                hex(int2)[2:],
                len(hex(int2)[2:]),
                "false",
                str(cmp)
            )

            tests += tmp

        with open(path, "w") as out:
            out.write("".join(head))
            out.write(tests)
            out.write("\n}")

    def bigint_not(self) -> None:
        path: str = os.path.join(self.tests_path, "bigint_not.c")
        with open(path, "r") as inp:
            head: list = inp.readlines()[:8]

        tests: str = ""
        for i in range(self.n):
            tmp: str = bigint_not_t

            integer: int = getrandbits(random.randint(1, 2048))
            reference: int = ~integer

            tmp = tmp.format(
                str(i + 1),
                hex(integer)[2:],
                len(hex(integer)[2:]),
                hex(reference)[3:],
                len(hex(reference)[3:])
            )

            tests += tmp

        with open(path, "w") as out:
            out.write("".join(head))
            out.write(tests)
            out.write("\n}")

    def bigint_and(self) -> None:
        path: str = os.path.join(self.tests_path, "bigint_and.c")
        with open(path, "r") as inp:
            head: list = inp.readlines()[:8]

        tests: str = ""
        for i in range(self.n):
            tmp: str = bigint_and_t

            int1: int = getrandbits(random.randint(1, 2048))
            int2: int = getrandbits(random.randint(1, 2048))
            reference: int = int1 & int2

            tmp = tmp.format(
                str(i+1),
                hex(int1)[2:],
                len(hex(int1)[2:]),
                hex(int2)[2:],
                len(hex(int2)[2:]),
                hex(reference)[2:],
                len(hex(reference)[2:])
            )

            tests += tmp

        with open(path, "w") as out:
            out.write("".join(head))
            out.write(tests)
            out.write("\n}")

    def bigint_or(self) -> None:
        path: str = os.path.join(self.tests_path, "bigint_or.c")
        with open(path, "r") as inp:
            head: list = inp.readlines()[:8]

        tests: str = ""
        for i in range(self.n):
            tmp: str = bigint_or_t

            int1: int = getrandbits(random.randint(1, 2048))
            int2: int = getrandbits(random.randint(1, 2048))
            reference: int = int1 | int2

            tmp = tmp.format(
                str(i+1),
                hex(int1)[2:],
                len(hex(int1)[2:]),
                hex(int2)[2:],
                len(hex(int2)[2:]),
                hex(reference)[2:],
                len(hex(reference)[2:])
            )

            tests += tmp

        with open(path, "w") as out:
            out.write("".join(head))
            out.write(tests)
            out.write("\n}")

    def bigint_xor(self) -> None:
        path: str = os.path.join(self.tests_path, "bigint_xor.c")
        with open(path, "r") as inp:
            head: list = inp.readlines()[:8]

        tests: str = ""
        for i in range(self.n):
            tmp: str = bigint_xor_t

            int1: int = getrandbits(random.randint(1, 2048))
            int2: int = getrandbits(random.randint(1, 2048))
            reference: int = int1 ^ int2

            tmp = tmp.format(
                str(i+1),
                hex(int1)[2:],
                len(hex(int1)[2:]),
                hex(int2)[2:],
                len(hex(int2)[2:]),
                hex(reference)[2:],
                len(hex(reference)[2:])
            )

            tests += tmp

        with open(path, "w") as out:
            out.write("".join(head))
            out.write(tests)
            out.write("\n}")

    def bigint_add(self) -> None:
        path: str = os.path.join(self.tests_path, "bigint_add.c")
        with open(path, "r") as inp:
            head: list = inp.readlines()[:8]

        tests: str = ""
        for i in range(self.n):
            tmp: str = bigint_add_t

            summand1: int = getrandbits(random.randint(1, 2048))
            summand2: int = getrandbits(random.randint(1, 2048))
            sum: int = summand1 + summand2

            tmp = tmp.format(
                str(i+1),
                hex(summand1)[2:],
                len(hex(summand1)[2:]),
                hex(summand2)[2:],
                len(hex(summand2)[2:]),
                hex(sum)[2:],
                len(hex(sum)[2:])
            )

            tests += tmp

        with open(path, "w") as out:
            out.write("".join(head))
            out.write(tests)
            out.write("\n}")

    def bigint_subtract(self) -> None:
        path: str = os.path.join(self.tests_path, "bigint_subtract.c")
        with open(path, "r") as inp:
            head: list = inp.readlines()[:8]

        tests: str = ""
        for i in range(self.n):
            tmp: str = bigint_subtract_t

            minuend: int = getrandbits(random.randint(1, 2048))
            subtrahend: int = getrandbits(random.randint(1, 2048))
            difference: int = minuend - subtrahend


            tmp = tmp.format(
                str(i+1),
                hex(minuend)[2:],
                len(hex(minuend)[2:]),
                hex(subtrahend)[2:],
                len(hex(subtrahend)[2:]),
                hex(difference)[2:] if difference > 0 else hex(difference)[3:],
                len(hex(difference)[2:]) if difference > 0 else len(hex(difference)[3:]),
                "false" if difference > 0 else "true"
            )

            tests += tmp

        with open(path, "w") as out:
            out.write("".join(head))
            out.write(tests)
            out.write("\n}")

    def bigint_shift_left(self) -> None:
        path: str = os.path.join(self.tests_path, "bigint_shift_left.c")
        with open(path, "r") as inp:
            head: list = inp.readlines()[:9]

        tests: str = ""
        for i in range(self.n):
            tmp: str = bigint_shift_left_t

            bits: int = random.randint(0, 2048)
            integer: int = getrandbits(random.randint(1, 2048))
            shifted: int = (integer << bits)

            tmp = tmp.format(
                str(i + 1),
                str(bits),
                hex(integer)[2:],
                len(hex(integer)[2:]),
                "false" if True else "true",
                hex(shifted)[2:],
                len(hex(shifted)[2:]),
                "false" if True else "true"
            )

            tests += tmp

        with open(path, "w") as out:
            out.write("".join(head))
            out.write(tests)
            out.write("\n}")

    def bigint_shift_right(self) -> None:
        path: str = os.path.join(self.tests_path, "bigint_shift_right.c")
        with open(path, "r") as inp:
            head: list = inp.readlines()[:9]

        tests: str = ""
        for i in range(self.n):
            tmp: str = bigint_shift_right_t

            bits: int = random.randint(0, 2048)
            integer: int = getrandbits(random.randint(1, 2048))
            shifted: int = integer >> bits

            tmp = tmp.format(
                str(i + 1),
                str(bits),
                hex(integer)[2:],
                len(hex(integer)[2:]),
                "false" if True else "true",
                hex(shifted)[2:],
                len(hex(shifted)[2:]),
                "false" if True else "true"
            )

            tests += tmp

        with open(path, "w") as out:
            out.write("".join(head))
            out.write(tests)
            out.write("\n}")

    def bigint_multiply(self) -> None:
        path: str = os.path.join(self.tests_path, "bigint_multiply.c")
        with open(path, "r") as inp:
            head: list = inp.readlines()[:8]

        tests: str = ""
        for i in range(self.n):
            tmp: str = bigint_multiply_t

            factor1: int = getrandbits(random.randint(1, 2048))
            factor2: int = getrandbits(random.randint(1, 2048))
            product: int = factor1 * factor2

            tmp = tmp.format(
                str(i + 1),
                hex(factor1)[2:],
                len(hex(factor1)[2:]),
                hex(factor2)[2:],
                len(hex(factor2)[2:]),
                hex(product)[2:],
                len(hex(product)[2:])
            )

            tests += tmp

        with open(path, "w") as out:
            out.write("".join(head))
            out.write(tests)
            out.write("\n}")

    def bigint_all(self) -> None:
        self.bigint_compare()
        self.bigint_not()
        self.bigint_and()
        self.bigint_or()
        self.bigint_xor()
        self.bigint_add()
        self.bigint_subtract()
        self.bigint_shift_left()
        self.bigint_shift_right()
        self.bigint_multiply()