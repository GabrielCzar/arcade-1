#include <stdio.h>

int main(){

	float menor = 10;
	float x,i,soma=0;

	for (i = 0; i < 4; i++){
		scanf("%f",&x);
		soma += x;
		if(x < menor)
			menor = x;
	}
	soma-=menor;
	
	if ((soma/3) > 6.9)
		printf("Aprovado com %.2f\n",(soma/3));
	else if((soma/3) < 4.0)
		printf("Reprovado com %.2f\n",(soma/3));
	else
		printf("Final com %.2f\n",(soma/3));

	return 0;
}
