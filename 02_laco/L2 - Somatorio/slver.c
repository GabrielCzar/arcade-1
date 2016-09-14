#include<stdio.h>

int main(){
	
	int a,b,x,result = 0,i;

	scanf("%d%d%d", &a,&b,&x);

	for (i = a; i < b; i++){
		if((i  % 2) == 0 && (i % 3) == 0 && (i % x) == 0)
			result = i + result;
	}

	printf("%d\n", result );

	return 0;
}