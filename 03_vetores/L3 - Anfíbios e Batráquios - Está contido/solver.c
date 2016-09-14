#include <stdio.h>


int main(){

	int n1, n2, i, j, cont = 0;
	scanf("%d", &n1);

	int vet1[n1];

	for(i = 0; i < n1; i++){
		scanf("%d", &vet1[i]);
	}
	scanf("%d", &n2);

	int vet2[n2];

	for(i = 0; i < n2; i++){
		scanf("%d", &vet2[i]);
	}

	for(i = 0; i < n2; i++){
		for(j = 0; j < n2; j++)
			if(vet1[i] == vet2[j])
				cont++;
	}

	if(cont == n1){
		printf("sim");
	}

	else{
		printf("nao");
	}

	return 0;
}