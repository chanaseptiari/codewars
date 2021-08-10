def solution(s):
    # string = ""
    # for c in s:
    #     if c.isupper():
    #         string += (f" {c}")
    #     else:
    #         string += c
    # return string
    return "".join(x if x.isupper else x for x in s)



print(solution("aA zZ !@#_"))
print(solution("helloWorld"))
print(solution("camelCase"))
print(solution("breakCamelCase"))
