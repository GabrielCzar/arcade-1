###Descrição:

A brincadeira do avesso funciona assim.

* Tem um chefe e os operários.
* Os operarios ficam em fila.
* O chefe diz o nome de um operario e os dois operários
que estavam perto dele tem que trocar de posição.
	* Se estavam em pé, ficam agachados.
	* Se estavam agachados ficam em pé.

Suponha a seguinte configuração onde cada número
representa uma pessoa.

	[3 4 8 9 1 5 6]

Se o chefe grita "4", então o "3" e o "8" se agacham e
o vetor fica assim:

	[-3 4 -8 9 1 5 6]

Usando o sinal negativo para representar o agachado.

Depois o chefe grita "9". O -8 e o 1 se alteram ficando
assim:

	[-3 4 8 9 -1 5 6]

O 8 volta ao normal e o 1 se agacha.

Considere que nunca existem duas pessoas com o mesmo número
no vetor. Se o chefe disser um número errado, ninguém deve
se mexer.

---

###Entrada e Saída:

Entrada:
* primeira linha: o tamanho do vetor de operarios(N < 100) e o grito do chefe( 0 < X < 100)
* segunda linha: o vetor de operarios, cada elemento entre (0 < 100)

Saída:
o novo vetor

###Eemplos:

	>>
	2 3
	3 1
	<<
	3 -1

---

	>>
	2 3
	2 1
	<<
	2 1

---

	>>
	2 1
	4 1
	<<
	-4 1
