a = input()
b = input()
c = input()
d = input()
e = input()
lista = [a, b, c, d, e]
M = a #maior
m = a #menor
for x in lista:
    if x > M:
       M = x
    if x < m:
       m = x

print str(m + M)
