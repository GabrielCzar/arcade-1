#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero,y = 0;
	scanf("%d",&numero);
	int *vet = malloc(sizeof(int)*y+1);
	
	int mod = 10;
	
	while(numero > 0){
		vet = realloc(vet,sizeof(int)*y+1);
		vet[y] = (numero%mod) / (mod/10);
		numero = numero - (numero%mod);
		mod = mod*10;
		y++;
	}
	
	for(y = y-1; y >= 0;y--){
		printf("%d ",vet[y]);
	}

	free(vet);
	return 0;
}