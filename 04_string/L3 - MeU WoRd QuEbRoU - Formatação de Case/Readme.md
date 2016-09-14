### Descrição:

O seu editor de texto deu problema.
Seu orientador pediu que você formatasse toda uma seção do seu trabalho em caixa alta.
Como você é um fantástico programador resolveu logo fazer algo mais completo.

Dado um texto, formate como for pedido
(M - Toda maiuscula, m - toda minuscula, p - primeira maiuscula, i - inverter case).

Observe que no primeiro maiuscula deixa como minuscula palavras de tamanho 1 como os artigos 'a', 'e', 'o'.

Ignore pontuação, espaço e números.

A entrada é composta de minúsculas, maiúsculas, números, pontuação e espaços simples.

---

### Entrada e Saída:

[Entrada 1] Texto com até 100 caracteres;

[Entrada 2] Caracteres representando a formatação (M, m, p, i);

[Saída] Texto formatado.

---

### Exemplos:

	>>
	O Pato e o frango ja tao cozidos, comam!
	M
	<<
	O PATO E O FRANGO JA TAO COZIDOS, COMAM!
---
	>>
	O Pato e o frango ja tao cozidos, comam!
	m
	<<
	o pato e o frango ja tao cozidos, comam!
---
	>>
	O Pato e o frango ja tao cozidos, comam!
	p
	<<
	o Pato e o Frango Ja Tao Cozidos, Comam!
---
	>>
	O Pato e o frango ja tao cozidos, comam!
	i
	<<
	o pATO E O FRANGO JA TAO COZIDOS, COMAM!
