### Descrição

Se você nunca jogou um jogo de tabuleiro chamado WAR, não sabe o que é passar horas e horas com seus amigos jogando dados e capturando territórios na esperança de vencer uma partida que nunca acaba.

Se você já jogou, sabe como dá um nó no juízo fazer as continhas daqueles dados depois de meia noite.

Implemente a lógica dos dados do WAR e diga quantos exércitos cada um perdeu. O valor dos dados é entre 1 e 6. Cada jogador escolhe atacar entre 1 e 3 exércitos.

Regras:

O melhor dado do atacante é comparado com o melhor dado do defensor. O segundo melhor dado do atacante é comparado com o segundo melhor dado do defensor e assim por diante ENQUANTO OS AMBOS POSSUEM DADOS VÁLIDOS. O defensor joga pelo empate.


Se ler mais olhe em http://www.warnet.com.br/pub/man_regras.aspx

### I/O

Entrada:

Cada um pode lançar até três dados. Os dados que faltam serão completados com 0. Os dados válidos já estarão ordenados. 

* 1a linha: Os dados lançados pelo atacante.
* 2a linha: Os dados lançados pelo atacante.

Saída:
* 1a linha: a quantidade de dados que o atacante perdeu.
* 2a linha: a quantidade de dados que o defensor perdeu.

### Exemplo:

    >>
    4 3 1
    5 2 0
    <<
    1
    1
---
    >>
    6 3 0
    6 4 3
    <<
    2
    0
---
    >>
    6 4 3
    5 3 1
    <<
    0
    3
   

