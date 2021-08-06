def likes(names):
    # your code here
    # if len(names) < 1:
    #     return "no one likes this"
    # if len(names) == 1:
    #     return f"{names[0]} likes this"
    # if len(names) == 2:
    #     return f"{names[0]} and {names[1]} like this"
    # if len(names) == 3:
    #     return f"{names[0]}, {names[1]} and {names[2]} like this"
    # if len(names) > 3:
    #     return f"{names[0]}, {names[1]} and {len(names) - 2} others like this"
    
    n = len(names)
    return {
        0: "no one likes this",
        1: "{} likes this",
        2: "{} and {} like this",
        3: "{}, {} and {} like this",
        4: "{}, {} and {other} like this",
    }[min(4, n)].format(*names[:3], other=n-2)


print(likes([]))
print(likes(['Peter']))
print(likes(['Jacob', 'Alex']))
print(likes(['Max', 'John', 'Mark']))
print(likes(['Alex', 'Jacob', 'Mark', 'Max']))
