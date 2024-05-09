def reverse_words(text):
    result = []
    for i in text.split(" "):
        result.append(i[::-1])
    return " ".join(result)


print(reverse_words('The quick brown fox jumps over the lazy dog.'))
print(reverse_words('apple'))
print(reverse_words('a b c d'))
print(reverse_words('double  spaced  words'))
