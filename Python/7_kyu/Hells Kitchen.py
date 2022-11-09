def gordon(a):
    b = []
    for i in 'A':
        a = a.upper().replace(i, "@")
    for j in 'IUEO':
        a = a.replace(j, "*")
    for j in a.split():
        b.append(j + "!!!!")
    return " ".join(b)


print(gordon('What feck damn cake'))
print(gordon('are you stu pid'))
print(gordon('i am a chef'))
print(gordon('dont you talk tome'))
print(gordon('how dare you feck'))
