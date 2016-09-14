#include <stdio.h>

int main(){
	
	//criação das variaveis e inicialização
	int ultron,t,i,entrada;
	int Q_ultron = 0;
	scanf("%d %d",&ultron,&t);
	
	
	// aqui é entrado os valores, e verificado se é o ultron
	for(i = 0; i < t; i++){
		scanf("%d",&entrada);
		if(entrada == ultron)
			Q_ultron += 1;
	}
	
	printf("%d",Q_ultron);
	
	return 0;
}
