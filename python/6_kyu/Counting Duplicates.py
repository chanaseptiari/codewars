def duplicate_count(text):
    # Your code goes here
    t = sorted(text.lower())
    obj = set([x for x in t if t.count(x) > 1])
    return len(obj)


print(duplicate_count(""))
print(duplicate_count("abcde"))
print(duplicate_count("abcdeaa"))
print(duplicate_count("abcdeaB"))
print(duplicate_count("Indivisibilities"))
