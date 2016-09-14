#include <stdio.h>

int main(){
	int t;
	//recebe o tamanho do vetor
	scanf("%d",&t);
	
	int vet[t];
	int i = 0;
	//recebe os valores
	for(i = 0 ; i < t ; i++){
		scanf("%d",&vet[i]);
	}
	
	//printa na tela o vetor de forma invertida
	for(i = t-1 ; i >= 0; i--){
		printf("%d ",vet[i]);
	}
	return 0;
}
