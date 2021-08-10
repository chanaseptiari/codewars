def find_smallest_int(arr):
    # return min(arr)
    smallest = []
    for i in range(0, len(arr)):
        if (arr[i] < smallest):
            smallest = arr[i]
    return smallest


print(find_smallest_int([78, 56, 232, 12, 11, 43]))
print(find_smallest_int([78, 56, -2, 12, 8, -33]))
print(find_smallest_int([0, 1-2**64, 2**64]))
