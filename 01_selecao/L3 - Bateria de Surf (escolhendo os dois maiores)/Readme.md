### Descrição

Na WSL (World Surf League), os melhores surfistas do mundo competem percorrem
diversas praia do mundo para descobrir quem é o melhor surfista do mundo.

O campeonato é divido em etapas e cada etapa ocorrem em uma praia diferente.

Cada etapa do circuito é divido em diversas fases classificatórias.
Para passar de fase o surfista tem que vence a bateria que disputar.
A disputa de uma bateria pode ser entre dois ou três surfistas.

Sagra-se vencedor da bateria aquele surfista com a soma das notas das duas
melhores ondas surfadas .

Durante a bateria um surfista pegar quantas onda conseguir.

Faça um programa que recebe o nome dos dois surfistas que competiram e a lista
das notas que eles receberam em cada onda que surfaram e mostre quem foi o
vencedor da bateria.

### I/O
* Entrada:
  * Linha 1: Nome do primeiro surfista (max 30 char)
  * Linha 2: Quantidade de ondas surfadas(int entre 1 e 10)
  * Linha 3: Notas das ondas(float entre 0.0 e 10.0)
  * Linhas 4, 5 e 6. Valores para o segundo surfista.
* Saída:
  * Nome do surfista vencedor.

### Exemplos

    >>
    Owen Wright
    5
    7.5 9.6 1.43 10.0 10.00
    Julian Wilson
    4
    3.14 4.67 0.5 1.23
    <<
    Owen Wright

---
    Maga Iver
    7
    10.0 9.9 9.9 9.9 9.9 9.9 9.9
    Thu Kino Uris
    2
    10.0 10.0
    <<
    Thu Kino Uris

Autor: Bruno Góes
