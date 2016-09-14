#include <stdio.h>

int main(){

	
	int m,i, valor = 7;

	scanf("%d", &m);
	
	for(i = 11; i <= m; i++){
		if( i < 31)
			valor += 1;
		else if( i < 101)
			valor += 2;
		else if( i >= 101)
			valor += 5;
	}
	
	printf("%d", valor);
	return 0;

}
