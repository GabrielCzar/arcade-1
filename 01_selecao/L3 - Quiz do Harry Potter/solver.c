#include <stdio.h>

int main(){

	char respUsu[4];
	char respCet[4] = {"dacd"};

	int i=0,acertos = 0;
	
	while(i < 4){
		scanf("%c",&respUsu[i]);
		if (respUsu[i] == respCet[i])
			acertos++;
		if (respUsu[i] != '\n')
			i++;
	}

	switch(acertos){

		case 1:
			printf("Ja ouviu falar\n");
		break;

		case 2:
			printf("Interessado no assunto\n");
		break;

		case 3:
			printf("Fa\n");
		break;

		case 4:
			printf("Super Fa\n");
		break;

		default:
			printf("Nunca assistiu\n");
	}
	return 0;
}
