def iq_test(numbers):
    # e = []
    # for i in numbers.split():
    #     if int(i) % 2 == 0:
    #         e += [True]
    #     else:
    #         e += [False]

    # if e.count(True) < 2:
    #     return e.index(True) + 1
    # else:
    #     return e.index(False) + 1

    e = [int(i) % 2 == 0 for i in numbers.split()]
    return e.index(True) + 1 if e.count(True) == 1 else e.index(False) + 1


print(iq_test("2 4 7 8 10"))
print(iq_test("1 2 2"))
