
def max_redigit(num):
    return int(''.join(sorted(str(num), reverse=True))) if len(str(num)) == 3 and all(i.isdigit() for i in str(num)) else None


print(max_redigit(123))
print(max_redigit(555))
print(max_redigit(-1))
print(max_redigit(0))
print(max_redigit(99))
print(max_redigit(1000))
