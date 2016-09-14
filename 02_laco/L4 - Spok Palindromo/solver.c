#includ <stdio.h>

int main(){
	
	int numero,original,inverso = 0,i = 1;
	
	scanf("%d",&numero);
	original = numero;
	
	if(numero % 10 == 0){
		printf("0\n");
		return 0;
	}

	while(numero > 0){
		inverso *=  10;
		inverso += (numero%(i*10))/i;
		numero = numero - numero%(i*10);
		i *= 10;
	}
	
	if(inverso == original)
		printf("1\n");
	else
		printf("0\n");
			
	return 0;
}