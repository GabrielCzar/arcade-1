#include <stdio.h>

int main(){

	int t,i,cont=0;
	printf("digite o tamanho \n");
	scanf("%d",&t);
	int vet[t];
	for(i=0;i<t;i++){
		scanf("%d",&vet[i]);
	}

	for(i=0;i<t-1;i++){
		if ((vet[i] - vet[i+1] < -1) || (vet[i] - vet[i+1] > 1)){
			cont++;
		}
	}
	printf("%d \n",cont );
	return 0;
}
