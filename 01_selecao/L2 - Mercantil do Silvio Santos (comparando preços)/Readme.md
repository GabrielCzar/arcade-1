### Descrição

Pedro e João foram no Silvio Santos. O programa era aquele
que o Silvio mostrava um produto do mercantil e a pessoa
que chegasse mais próximo do preço real ganhava.

O objetivo do seu programa é informar quem ganhou a disputa.
Você receberá o valor do produto e o valor do chute de cada jogador.
O jogador que chegar mais perto ganha.

Se ambos derem o mesmo chute escreva "invalido".

[DS]

### I/O
Entrada:
* linha 1: o valor do produto.(valor inteiro entre 1 e 100)
* linha 2: o chute do Primeiro
* linha 3: o chute de Segundo

Saida:
* "primeiro" se o chute do Primeiro for o mais próximo do valor do produto
* "segunda" se o chute do Segundo for o mais próximo do valor do produto
* "invalido" caso ambos derem o mesmo chute

### Exemplos

    >>
    1
    2
    2
    <<
    invalido
---
    >>
    3
    5
    4
    <<
    segundo
---
    >>
    10
    11
    15
    <<
    primeiro
---
    >>
    20
    21
    22
    <<
    primeiro
---
    >>
    20
    21
    21
    <<
    invalido
