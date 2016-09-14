letra = raw_input()
rot = input()

num = ord(letra) - ord('a')
num = (num + rot) % 26

letra = chr(num + ord('a'))
print letra