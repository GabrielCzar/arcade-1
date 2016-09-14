#include <stdio.h>

int main(){

	int n;

	scanf("%d", &n);

	int vet[n],i,j;

	for (i = 0; i < n; i++){
		scanf("%d", &vet[i]);
	}

	for(i = 0; i < n; i++){    // Buble Sort
		for (j = 0; j < n - i; j++){
			if(vet[j] > vet[j+1]){
				int aux = vet[j+1];
				vet[j+1] = vet[j];
				vet[j] = aux;
			}
		}
	}

	int soma = 0;
	for(i = 0; i < n; i++){  
		soma = soma + vet[i];
	}
	
	float media = soma / n;
	
	printf("%f", media);
	
	return 0;
}
#include <stdio.h>

int main(){

	int n;

	scanf("%d", &n);

	int vet[n],i,j;

	for (i = 0; i < n; i++){
		scanf("%d", &vet[i]);
	}

	for(i = 0; i < n; i++){    // Buble Sort
		for (j = 0; j < n - i; j++){
			if(vet[j] > vet[j+1]){
				int aux = vet[j+1];
				vet[j+1] = vet[j];
				vet[j] = aux;
			}
		}
	}

	int soma = 0;
	for(i = 0; i < n; i++){  
		soma = soma + vet[i];
	}
	
	float media = soma / n;
	
	printf("%f", media);
	
	return 0;
}
