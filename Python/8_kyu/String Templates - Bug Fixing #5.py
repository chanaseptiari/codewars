def build_string(*args):
    return "I like {}!".format(', '.join(args))


print(build_string('Cheese', 'Milk', 'Chocolate'))
print(build_string('Cheese', 'Milk'))
print(build_string('Chocolate'))
