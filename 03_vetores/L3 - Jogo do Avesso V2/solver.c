#include <stdio.h>
#include <stdlib.h>


//função pra preencher os vetores 
void preencheVetor(int t, int *vetor){
	int i = 0;
	for(i = 0; i < t; i++){
		scanf("%d",&vetor[i]);
	}
}

//função que vai trocar o sinal dos operarios
void trocaSinal(int t, int *vetor, int g){
	int i = 0;
	//o vetor será percorrido
	for(i = 0; i < t; i++){
		//caso o numero que o chefe gritou seja encontrado, ele entra nessa condição
		if(vetor[i] == g || vetor[i] * -1 == g){
			//se existir algum numero anterior ao escolhido pelo chefe, o seu sinal é trocado
			if(i-1 >= 0)
				vetor[i-1] *= -1;
			//se existir algum numero depois ao escolhido pelo chefe, o seu sinal é trocado
			if(i+1 < t)
				vetor[i+1] *= -1;
			//aqui depois de tudo verificado ele fecha o for
			break;
		}
	}
}

int main(){
	
	int to,tg;
	scanf("%d %d",&to,&tg);
	
	//alocando o tamanho do vetor de forma dinamica
	int *vetOperarios = malloc(sizeof(int)*to);
	int *vetGritos = malloc(sizeof(int)*tg);
	
	//preenchendo o vetor
	preencheVetor(to,vetOperarios);
	preencheVetor(tg,vetGritos);
	
	
	int i=0;
	
	//nesse for ele ira percorrer o vetor de gritos e irar passar o grito especifico para a função de trocar sinal, junto com o vetor de operarios, e o tamanho do vetor de operarios.
	for(i = 0; i < tg; i++)
		trocaSinal(to,vetOperarios,vetGritos[i]);
	
	//aqui é printado o vetor na tela
	for(i = 0; i < to; i++)
		printf("%d ",vetOperarios[i]);
	
	//liberando o espaço na memoria.
	free(vetOperarios);
	free(vetGritos);
	return 0;
}
