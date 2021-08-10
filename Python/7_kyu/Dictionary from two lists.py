def createDict(keys, values):
    dic = {}
    for i in range(0, len(keys)):
        try:
            dic[keys[i]] = values[i]
        except IndexError:
            dic[keys[i]] = None
    return dic


print(createDict(['a', 'b', 'c', 'd'], [1, 2, 3]))
print(createDict(['a', 'b', 'c'], [1, 2, 3, 4]))
