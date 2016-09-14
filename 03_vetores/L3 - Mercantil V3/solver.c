#include <stdio.h>

int main(void){
    //tamanho dos vetores

    int t = 0;
    scanf("%d",&t);


    int i;

    //criacao de vetor de preço do produto
    int precoOrig[t];
    //atribui os valores em sua determinada ordem
    for(i = 0; i<t ; i++){
        scanf("%d",&precoOrig[i]);
    }

    //criacao de vetor e contador do jogador 1
    int jogador1[t];
    int contJog1 = 0;

    //verifica a escolha do jogador 1 e incrementa o contador se for certo
    for(i = 0; i<t ; i++){
        scanf("%d",&jogador1[i]);
        if(jogador1[i] == precoOrig[i]){
            contJog1++;
        }
    }


    //criacao de vetor e contador do jogador 2
    char jogador2[t];
    int contJog2 = 0;

    //lendo as strings
    scanf("%s",jogador2);

    //verifica a escolha do jogador 2 e incrementa o contador se for certo
    for(i = 0; i<t ; i++){
        if(jogador2[i] == 'm'){
            if(precoOrig[i] < jogador1[i]){
                contJog2++;
            }
        }
        else{
            if(precoOrig[i] > jogador1[i]){
                contJog2++;
            }
        }
    }

    //verifica se deu empate,ou se algum dos jogadores ganharam
    if(contJog1 == contJog2)
        printf("empate");
    else if(contJog1 > contJog2)
        printf("primeiro");
    else
        printf("segundo");

    return 0;
}


