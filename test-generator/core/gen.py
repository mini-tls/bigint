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
        pass

    def bigint_shift_right(self) -> None:
        pass

    def bigint_all(self) -> None:
        self.bigint_compare()
        self.bigint_add()
        self.bigint_subtract()