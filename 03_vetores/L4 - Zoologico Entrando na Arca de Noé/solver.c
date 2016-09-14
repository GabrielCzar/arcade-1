#include <stdio.h>

int  main(){
	
	int n;

	scanf("%d", &n);

	int vet[n],i,j,casal = 0;

	for (i = 0; i < n; i++)
		scanf("%d", &vet[i]);
	
	for (i = 0; i < n; i++)
		for (j = i; j < n; j++)
			if(vet[i] == (vet[j] * -1)){
				casal++;
			}

	printf("%d\n", casal);
	return 0;

}
