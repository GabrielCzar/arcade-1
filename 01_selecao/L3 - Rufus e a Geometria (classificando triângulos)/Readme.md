### Descrição

Rufus(Minha tartaruga Jedi) está estudando geometria e tirou nota baixa em triângulos. Como
Rufus já vê em 4 dimensões, problemas bidimensionais estão sendo um
estorvo de paciencia. Humano mediocremente limitados!! Faça um código
que automatize essa tafera boring boring para Rufus.

Faça um programa que dados 3 lados de um triângulo, deverá
informar se os valores podem ser um triângulo. Indique, caso os lados
formem um triângulo, se o mesmo é (equilatero, isosceles, escaleno, invalido)
Pois nem todos 3 valores formam um triangulo: 1 1 e 5 não formam!

Observe que 3 lados formam um triângulo se a soma de quaisquer dois lados for maior ou igual ao terceiro lado.

### I/O

Entrada:
* os lados do triângulo, um por linha(float)

Saída:
* invalido, isosceles, escaleno, equilatero.

[DS]

### Exemplos

    >>
    1
    1
    5
    <<
    invalido
---
    >>
    3
    3
    5
    <<
    isosceles
---
    >>
    5
    5
    5
    <<
    equilatero
---
    >>
    3
    4
    5
    <<
    escaleno
