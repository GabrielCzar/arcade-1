#include <stdio.h>

//aqui foi definido duas Enumerações True e False
typedef enum{FALSE,TRUE}boolean;


//essa função verifica se o numero passado x está presente no vetor
boolean possuiOuNpossui(int vet[], int t, int x){
	int i = 0;
	boolean resul = FALSE;
	for(i = 0; i < t; i++){
		if(vet[i] == x)
			resul = TRUE;
	}
	
	return resul;
}


int main(){
	
	int qFigAlbum = 0;
	int qFigPossui = 0;
	//aqui é recebido a quantidade de cartas do album e a quantidades de cartas que baruel tem em relação aquele album.
	scanf("%d %d",&qFigAlbum,&qFigPossui);
	//O tVetOriginal serve para receber o tamanho do vetor original, pois mais pra frente vai ser trabalhado o tamanho do vetor referente ao qFigPossui
	int tVetOriginal = qFigPossui;
	
	int vetFigurinhas[qFigPossui];
	int i,j,aux;
	
	//aqui o vetor é preenchido
	for(i = 0; i < qFigPossui; i++){
		scanf("%d",&vetFigurinhas[i]);
	}
	
	
	//nesse for encadiado ele vai verificar se existe alguma figurinha repetida, se ouver ele troca com a ultima figura do vetor e depois diminui o tamanho do vetor 
	for(i = 0; i < qFigPossui; i++){
		for(j = i+1; j < qFigPossui; j++){
			if(vetFigurinhas[i] == vetFigurinhas[j]){
				aux = vetFigurinhas[j];
				vetFigurinhas[j] = vetFigurinhas[qFigPossui-1];
				vetFigurinhas[qFigPossui-1] = aux;
				qFigPossui--;
			}
			
		}
	}
	
	//se a o tamanho do vetor tiver sido diminuido, é por que existe alguma figura ou figuras repetidas, esse for mostra as repetidas, ele inicia da ultima posicao do vetor que não possui repetidas e vai até o fim do tamanho original do vetor
	if(qFigPossui < tVetOriginal){
		for(i = tVetOriginal-1; i >= qFigPossui; i--){
			printf("%d ",vetFigurinhas[i]);
		}
	}else
		printf("N");
		
	
	printf("\n");
	
	
	//nesse for ele verifica se esta faltando algum numero pra coleção se a função retornar false, é porque o valor passado na função não está presente na coleção de baruel
	if(qFigPossui < qFigAlbum){
		for(i = 1; i <= qFigAlbum; i++){
			if(possuiOuNpossui(vetFigurinhas,qFigPossui,i) == FALSE)
				printf("%d ",i);	
		}
	}else
		printf("N");
	return 0;
}

