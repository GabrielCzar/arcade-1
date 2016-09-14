def op_soma(x, y):
      nx = ord(x) - ord('a')
      ny = ord(y) - ord('a')
      soma = (nx + ny)
      if soma > 25:
          soma -= 26
      soma += ord('a')
      soma = chr(soma)
      return soma
  
  def op_subt(x, y):
      nx = ord(x) - ord('a')
      ny = ord(y) - ord('a')
      subt = (nx - ny + 26) % 26
      if subt < 0:
          subt += 26
      subt += ord('a')
      subt = chr(subt)
      return subt
  
  letra = raw_input()
  op = raw_input()
  rot = raw_input()
  
  if op == '-':
      print op_subt(letra, rot)
  else:
      print op_soma(letra, rot)