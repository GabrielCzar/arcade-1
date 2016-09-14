#include<stdio.h>

int main(){
	
	int n,i;

	scanf("%d", &n);

	float vet[n],soma;

	for(i = 0; i < n; i++){
		scanf("%f", &vet[i]);
	}

	for(i = 0; i < n; i++){
		soma = soma + vet[i];
	}

	float result;

	result = soma / n;

	printf("%.1f\n", result );

	return 0;

}
