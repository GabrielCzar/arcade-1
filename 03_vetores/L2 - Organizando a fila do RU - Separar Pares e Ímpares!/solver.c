#include <stdio.h>

int main(){
	
	
	int t;
	//recebe o tamanho do vetor
	scanf("%d",&t);
	
	int vet[t];
	int i = 0;
	//recebe os valores no vetor
	for(i = 0; i < t; i++){
		scanf("%d",&vet[i]);
	}
	
	//mostra os impares na tela
	for(i = 0; i < t; i++){
		if(vet[i] % 2 != 0)
			printf("%d ",vet[i]);
	}
	printf("\n");
	
	//mostra os pares na tela
	for(i = 0; i < t; i++){
		if(vet[i] % 2 == 0)
			printf("%d ",vet[i]);
	}
	return 0;
}
