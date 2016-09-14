#include <stdio.h>

int main(){
	int t,i,j;
	//recebe o tamanho do vetor
	scanf("%d",&t);
	
	int vet[t];
	
	//preenche o vetor
	for(i = 0; i < t; i++)
		scanf("%d",&vet[i]);
	
	
	for(i = 0; i < t; i++){
		for(j = i+1; j < t; j++){
			//verifica se existe algum animal repetido, se ouver algum, ele puxa o animal da ultima posição e coloca no lugar do animal repetido, e no final diminui o tamanho do vetor
			if(vet[i] == vet[j]){
				vet[j] = vet[t-1];
				t--;
			}
			
		}
	}
	
	printf("%d",t);
	
	
	return 0;
}
