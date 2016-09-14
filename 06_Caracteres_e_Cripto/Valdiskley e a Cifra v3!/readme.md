### Descriçãos:

No capítulo 3 da saga de Valdiskey você vai escrever o
algoritmo que faz a criptografia e descriptografia.

Valentina aceitou o namoro e vai usar a o seu código para
ler o conteúdo das cartinhas de amor de Valdiskley.

Se você quiser pesquisar o nome dessa cifra é cifra
de Vigenere.

http://pt.wikipedia.org/wiki/Cifra_de_Vigen%C3%A8re

Primeiro a criptografia:

Dado um texto claro e uma chave você deve:
1 - Repetir a chave até que ela tenha o mesmo
tamanho do texto claro. No caso abaixo, repetimos
a palavra princesa até completar a frase.

2 - Voce soma os caracteres 2 a 2 como aprendeu
a fazer no segundo capítulo da história de Valdiskley.
Ignore a pontuação e opere apenas as letras.

Exemplo 1: chave: "abac"

texto: batata? sim! Frita!!
senha: abacab aca bacab
saida: bbtctb? skm! Grktb!!

Exemplo 2: chave: "princesa"

texto: "quando vi voce eu buguei"
senha: "prince sa prin ce saprin"
saida: "fliafs ni kfkr gy tuvlmv"

### Entrada e saida:

Entrada:
Primeira linha: a frase a ser operada, apenas caracteres minusculos e pontuação.
Segunda linha: a palavra chave, apenas caracteres minusculos e sem espaços ou pontuacao.
Terceira linha: A operacao de '+' para cifrar ou '-' para descifrar.
A operação de descifrar é o contrário da cifragem.

### Exemplos:
	>>
	batata? sim! Frita!!
	abac
	+
	<<
	bbtctb? skm! Grktb!!
---
	>>
	quando vi voce eu buguei
	princesa
	+
	<<
	fliafs ni kfkr gy tuvlmv
---
	>>
	a data ua bbfrua
	ab
	-
	<<
	a casa ta aberta
