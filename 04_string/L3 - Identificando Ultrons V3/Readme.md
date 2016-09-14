### Descrição:

Seu objetivo é que dado o código ultron e um vetor de códigos de pessoas, retornar o mapeamento dizendo quais são os ultrons e quais são as pessoas.

Mais que isso, se houver alguém que tenha uma coincidência de 100% indique que este pode ser chefe. Para ser ultron, MAIS de 50%
das letras precisa coincidir.

Para cada pessoa no ambiente escreva "pessoa", "ultron" ou "chefe".

---

### Entrada e Saida:

[Entrada 1] Código ultron de N letras( 1 < N < 10);

[Entrada 2] Linhas de até X caracteres (1 < X < 500), com vários códigos de pessoas, cada código de pessoas tem ate Y caracteres (1 < Y < 20) contendo apenas letras minúsculas e maiúsculas.
Os códigos de pessoas são separados por espaço;

[Saída] Uma linha contendo para cada pessoa a saída se ela é "ultron", "pessoa" ou "chefe".

---

### Exemplos:

	>>
	ultron
	ruame ronuai Lion uuuaaaa ronia kkk luno
	<<
	pessoa ultron chefe pessoa ultron pessoa chefe	
---
	>>
	aeiou
	arta euio auiaoauio riu pegasus
	<<
	pessoa chefe chefe ultron pessoa
---
	>>
	aer
	arta euio auiaoauio riu pegasus rea
	<<
	ultron pessoa pessoa pessoa pessoa chefe
	
Autor: David Sena
