def prime_factors(n):
    i, j, p = 2, 0, []
    while n > 1:
        while n % i == 0:
            n, j = n / i, j + 1
        if j > 0:
            p.append([i, j])
        i, j = i + 1, 0
    return ''.join('(%d' % q[0] + ('**%d' % q[1]) * (q[1] > 1) + ')' for q in p)


print(prime_factors(7775460))
# , "(2**2)(3**3)(5)(7)(11**2)(17)")
