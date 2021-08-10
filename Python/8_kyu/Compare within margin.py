def close_compare(a, b, margin=0):
    if (abs(a - b) <= margin):
        return 0
    if (a < b):
        return -1
    if (a > b):
        return 1
    return a - b


# No Margin
print(close_compare(4, 5))
print(close_compare(5, 5))
print(close_compare(6, 5))

# With margin of 3
print(close_compare(2, 5, 3))
print(close_compare(5, 5, 3))
print(close_compare(8, 5, 3))
print(close_compare(8.1, 5, 3))
print(close_compare(1.99, 5, 3))
