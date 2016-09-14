###Descrição:

Super Mário e Assassins Creed.

Thaiquovisqui da Silva está fazendo um joguinho
com uma mistura de Super Mário e Assassins Creed.

Nele, o Mário anda num cenário 2d, mas ao invés de pular
na cabeça dos inimigos ele mata com uma chave de fenda
no coração ou esmigalhando o crânio com uma chave inglesa.
Lembre-se que o Mário é encanador! Então isso faz todo
sentido jogabilistico.

O problema é que o cenário não ficou legal e tem alguns
locais ruins. Seja altos demais que onde o Mário tem dificuldade de subir ou baixos demais que ao cair ele morre.

Mário só consegue pular até um bloco acima do nível
atual, ou descer um bloco. Se a diferença entre os
níveis for maior que um bloco ele precisará fazer
um movimento de parkour.

Dado um cenário, calcule quantos movimentos de parkour
o Mário vai precisar para percorrer o cenário.

Um cenário é um vetor de números positivos onde o vetor
representa a altura dos blocos.

O vetor 1, 1, 3, 3, 4, 6, 4, 2, 2, 1 seria como o
seguinte cenário:

```
_____#____

_____#____

____###___

__#####___

__#######_

##########
```

Nele, o Mário precisa de 4 movimentos de parkour.

---

###Entrada e Saída:

Entrada:
* 1a linha: a quantidade de elementos do vetor(1 a 50).
* 2a linha: o vetor.

Saida:
* A quantidade de movimentos de parkour.

#### Obs

Toda vez que o próximo número do vetor tiver diferença de mais de um pro anterior, Mário terá de fazer um movimento de Parkour.

---

###Exemplos

	>>
	5
	1 2 1 2 3
	<<
	0

---

	>>
	6
	4 2 5 4 5 3
	<<
	3

---

	>>
	8
	1 3 5 7 6 5 4 3
	<<
	3
