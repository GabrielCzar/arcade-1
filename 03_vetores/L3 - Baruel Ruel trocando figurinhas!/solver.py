album = input()
num = input()
slista = raw_input().split(" ")

lista = []
for x in slista:
    lista.append(int(x))

repetidas = []
for ind in range(1, num):
    if(lista[ind] == lista[ind - 1]):
        repetidas.append(lista[ind])
faltam = []
for x in range(1, album + 1):
    if not (x in lista):
        faltam.append(x)

if len(repetidas) == 0:
    print "N"
else:
    for x in repetidas:
        print x,
    print ""
if len(faltam) == 0:
    print "N"
else:
    for x in faltam:
        print x,
    print ""