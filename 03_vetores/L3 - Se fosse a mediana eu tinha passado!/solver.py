tam = input()
svector = raw_input().split(" ")

vector = []
for x in svector:
    vector.append(float(x))

ovector = sorted(vector)

if tam % 2 == 1:
    print ovector[tam/2]
else:
    soma = ovector[tam/2] + ovector[tam/2 - 1]
    soma = soma/2.0
    print ("%.2f") %soma