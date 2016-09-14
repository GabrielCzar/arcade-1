a = input()
b = input()
x = input()
cont = 0
for e in range(a, b+1):
    if(e % 2 == 0 and e % 3 == 0 and e % x == 0):
        cont += e
print cont
