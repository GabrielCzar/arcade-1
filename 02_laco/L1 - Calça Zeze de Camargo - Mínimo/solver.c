#include <stdio.h>

int main(){
	
	int menor = 100;
	int entrada;
	int i = 0;
	for(i = 0; i < 5; i++){
		scanf("%d",&entrada);
		if(entrada < menor)
			menor = entrada;
	}
	
	printf("%d",menor);
	
	return 0;
}
