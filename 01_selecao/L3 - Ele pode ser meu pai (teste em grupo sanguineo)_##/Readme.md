### Descrição

Nestor é um menino de 11 anos de idade, que mora com sua mãe. Ele cresceu sem conhecer seu pai biológico, a única coisa que ele sabe, é que seu pai é um dos ex colegas de escola de sua mãe. 

Nestor teve acesso à listagem de todos os colegas que sua mãe teve e a listagem soma mais de 300 candidatos, e conforme ele estudou na escola, é possível descobrir quais destes colegas tem alguma chance de ser seu pai a partir do tipo sanguíneo e fator RH de se sangue, do sangue de sua mãe, e do sangue de cada candidato.

Como são muitos candidatos, Nestor pediu sua ajuda para fazer um programa que teste todos os candidatos e retorne os que tem chance de ser seu pai.

Seguem as tabelas as regras:
Tipo: http://i0.wp.com/diariodebiologia.com/files/2011/06/TABELA_TIPOS_SANGU%C3%8DNEOS.jpg?w=550

Rh: http://i0.wp.com/diariodebiologia.com/files/2011/06/TABELA_FATOR_RH.jpg?w=550


### I/O

Entrada:

A entrada do programa é composta por 3 pares de caracteres. O primeiro refere-se ao tipo sanguíneo e fator RH de Nestor, seguido pelas mesmas informações de sua mãe, e do candidato.

Por motivos de simplificação, ao invés de ler o tipo AB (necessitaria de 2 caracteres), utilize a letra X.

OBSERVAÇÃO: Caso tenha problemas para ler vários caracteres, adicione um espaço antes do %c (scanf(" %c", &variavel);).

Saída:

A saída deste programa consiste de "SIM", caso o candidato possa ser o pai, ou "NAO", caso o candidato não possa ser o pai.


### Exemplos

    >>
    O
    +
    O
    +
    B
    -
    <<
    SIM
---
    >>
    B
    -
    A
    +
    O
    +
    <<
    NAO
---
    >>
    B
    -
    X
    +
    O
    +
    <<
    SIM

