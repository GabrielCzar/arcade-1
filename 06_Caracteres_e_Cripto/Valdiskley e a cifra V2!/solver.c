#include <stdio.h>

char soma(char c1, char c2){
	return c1 + c2 - 97;
}

char subtracao(char c1, char c2){
	return c1 - c2 + 97;
}

int main(){
	char letra1, op, letra2;

	scanf("%c %c %c", &letra1, &op, &letra2);

	if(op == '+'){
		printf("%c\n", soma(letra1,letra2));
	}
	else if(op == '-'){
		printf("%c\n", subtracao(letra1,letra2));
	}
	return 0;
}