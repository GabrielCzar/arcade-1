texto = raw_input()

vogais = ""
cons = ""

VOG = "aeiou"
for x in texto:
    if x in VOG:
        vogais += x
    elif x != " ":
        cons += x

print vogais
print cons
