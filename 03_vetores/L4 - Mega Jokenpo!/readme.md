### Descrição

Rufus em sua evolução tartarugistica não se contenta com pouco. Descobriu um super jokenpo e deseja que você implemente em seu chip. Faça isso por Rufus.

Imagine uma lista circular com:

	Pedra, Fogo, Tesoura, Humano, Esponja, Papel, Ar, Agua, Arma

Nesta lista circular, cada elemento ganha de outros 4 a sua frente.

Ficou confuso?

	Pedra apaga fogo, esmaga tesoura, humano e esponja.
	Dogo derrete tesoura , queima humano, esponja e papel.
	Tesoura corta humano, esponja, papel e através do ar.
	Humano limpa com esponja, escreve com papel, respira ar e bebe água .
	Esponja absorve papel, usa bolsas de ar, absorve a água, limpa arma.
	Papel sopra ar, flutua sobre a água, tem mais poder que arma e cobre pedra.
	Ar evapora a água, mancha a arma, corrói pedra e sopra fogo.
	Água enferruja arma, fura pedra, apaga fogo e enferruja a tesoura.
	Arma acerta pedra, fogo, tesoura e humano.

Veja a imagem em: http://www.umop.com/images/rps9.jpg

### Entrade e Saida

	Entrada:
	* Os nomes são em inglês [rock, fire, scissors, human, sponge, paper, air, water, gun].
	* As opcões dos dois	jogadores, uma por linha

	Saída:
	* (empate, jog1 ou jog2)

### Exemplos

	>>
	sponge
	paper
	<<
	jog1
---
	>>
	air
	scissors
	<<
	jog2
---
	>>
	gun
	gun
	<<
	empate
---
Existem versões com até 101 elementos. Ficou curioso? http://imgur.com/gallery/dfPuD
