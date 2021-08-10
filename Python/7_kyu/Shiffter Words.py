def shifter(st):
    return sum(all(elem in "HIMNOSWXZ" for elem in x) for x in set(st.split()))


print(shifter("ON"))
print(shifter("OS IS UPDATED"))
print(shifter("WHO IS WHO"))
print(shifter("JS"))
print(shifter("I III I III"))
print(shifter(""))
