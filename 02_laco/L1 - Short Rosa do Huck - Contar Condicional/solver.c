#include <stdio.h>

int main(){
	
	//criação das variaveis e inicialização
	int cois,t,i,entrada;
	int Q_cois = 0;
	scanf("%d %d",&cois,&t);
	
	
	// aqui é entrado os valores, e verificado se é maior que os cois de hulk
	for(i = 0; i < t; i++){
		scanf("%d",&entrada);
		if(entrada > cois)
			Q_cois += 1;
	}
	
	printf("%d",Q_cois);
	
	return 0;
}
