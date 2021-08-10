def summation(num):
    # result = 0
    # if num <= 0:
    #     return False
    # for x in range(1, num+1):
    #     result = result+x
    # return result

    return sum(range(num+1))


print(summation(1))
print(summation(8))
print(summation(22))
print(summation(100))
print(summation(213))
