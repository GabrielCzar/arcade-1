num = input()
lista = raw_input().split(" ")
soma = 0.0
for elem in lista:
   soma += float(elem)
soma /= float(num)
 print("%.2f") %soma
