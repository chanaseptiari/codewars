def number(lines):    
    return [f"{i+1}: {a}" for i,a in enumerate(lines)]

print(number([]))
print(number(["a", "b", "c"]))
