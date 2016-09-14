#include <stdio.h>

int main(){
	
	
	// aqui sao criadas as variaveis e iniciadas
	int ini,fim,i;
	int soma = 0;
	scanf("%d %d",&ini,&fim);
	
	// aqui faz a somatoria
	for(i = ini ; i <= fim; i++){
		if(i %2 == 0 && i % 3 == 00)
			soma += i;
	}
		
	printf("%d",soma);
	
	return 0;
}
