#include<stdio.h>

int main(){
	
	int n,num,i,mod,aux,cont = 0;

	scanf("%d%d", &n,&num);

	for (i = 100000000; i > 0; i = i / 10){
		mod = num % i;
		aux = (num - mod)/i;
		num  = mod;

		if(aux == n){
			cont++;
		}

	}

	printf("%d\n", cont);

	return 0;

}
