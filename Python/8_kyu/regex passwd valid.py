from re import search
regex = (
    '^'            # start line
    '(?=.*\d)'     # must contain one digit from 0-9
    '(?=.*[a-z])'  # must contain one lowercase characters
    '(?=.*[A-Z])'  # must contain one uppercase characters
    '[a-zA-Z\d]'   # permitted characters (alphanumeric only)
    '{6,}'         # length at least 6 chars
    '$'            # end line
)
print(search(regex, 'fjd3IR9'))
print(search(regex, 'ghdfj32'))
print(search(regex, 'DSJKHD23'))
print(search(regex, 'dsF43'))
print(search(regex, '4fdg5Fj3'))
print(search(regex, 'DHSJdhjsU'))
print(search(regex, 'fjd3IR9.;'))
print(search(regex, 'fjd3  IR9'))
print(search(regex, 'djI38D55'))
print(search(regex, 'a2.d412'))
print(search(regex, 'JHD5FJ53'))
print(search(regex, '!fdjn345'))
print(search(regex, 'jfkdfj3j'))
print(search(regex, '123'))
print(search(regex, 'abc'))
print(search(regex, '123abcABC'))
print(search(regex, 'ABC123abc'))
print(search(regex, 'Password123'))
