def sequence(x):
    # a = []
    # for i in range(1, x + 1):
    #     a.append(i)
    # a.sort(key=lambda x: str(x)[:1])
    # return a

    return sorted(range(1, x+1), key=str)


print(sequence(16))
print(sequence(9))
print(sequence(100))
