import re


def to_jaden_case(string):
    return re.sub(r"[A-Za-z]+('[A-Za-z]+)?", lambda word: word.group(0).capitalize(), string)


print(to_jaden_case("How can mirrors be real if our eyes aren't real"))
