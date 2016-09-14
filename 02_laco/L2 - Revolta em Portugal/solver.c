#include <stdio.h>

int main(){
	
	int n;

	scanf("%d", &n);

	int vet[n], reb = 0,sold = 0, i;
	
	for(i = 0; i < n; i++){
		scanf("%d", &vet[i]);
	}

	for(i = 0; i < n; i++){
		if ((vet[i] % 2) == 0)
			reb += vet[i];
		else
			sold += vet[i];
	}
	if(sold > reb)
		printf("Soldados");
	else if(reb > sold)
		printf("rebeldes");
	else
		printf("empate");

	return 0;
}
