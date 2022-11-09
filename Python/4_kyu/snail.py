def snail(arr):
    sort = []
    while len(arr) > 0:
        sort += arr[0]
        del arr[0]
        if len(arr) > 0:
            for i in arr:
                sort += [i[-1]]
                del i[-1]
            if arr[-1]:
                sort += arr[-1][::-1]
                del arr[-1]
            for i in reversed(arr):
                sort += [i[0]]
                del i[0]
    return sort


array = [[1, 2, 3],
         [4, 5, 6],
         [7, 8, 9]]
print(snail(array))


array = [[1, 2, 3],
         [8, 9, 4],
         [7, 6, 5]]
print(snail(array))
