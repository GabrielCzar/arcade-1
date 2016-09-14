#include <stdio.h>

int main(){
	
	int t,g;
	//aqui recebe o tamanho do vetor e o grito do chefe
	scanf("%d %d",&t,&g);
	
	int vet[t];
	int i =0;
	//aqui o vetor é preenchido
	for(i = 0 ; i < t ; i++){
		scanf("%d",&vet[i]);
	}
	
	//o vetor será percorrido
	for(i = 0 ; i < t ; i++){
		//caso o numero que o chefe gritou seja encontrado, ele entra nessa condição
		if(vet[i] == g || vet[i] * -1 == g){
			//se existir algum numero anterior ao escolhido pelo chefe, o seu sinal é trocado
			if(i-1 >= 0)
				vet[i-1] = vet[i-1] * -1;
			//se existir algum numero depois ao escolhido pelo chefe, o seu sinal é trocado
			if(i+1 < t)
				vet[i+1] = vet[i+1] * -1;
			//aqui depois de tudo verificado ele fecha o for
			break;
		}
	}
	
	//printa o novo vetor na tela
	for(i = 0 ; i < t ; i++){
		printf("%d ",vet[i]);
	}
	
	return 0;
}
