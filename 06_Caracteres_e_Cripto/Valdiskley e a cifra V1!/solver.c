#include <stdio.h>

//usando tablela ASCII

char rotacao(int inicio, int fim, char letra, int rot){
	if(letra >= inicio && letra <= fim){
		letra = letra + rot;
		if(letra < inicio){     // caso a letra tenha exedido ou passado o tamanho ele faz um rotação para determina letra certa.
			letra = (letra - inicio) + fim + 1;
		}if(letra > fim)
			letra = (letra - fim) + inicio - 1;
	}
	return letra;
}

int main(){

	char letra;
	int	rot;

	scanf("%c%d", &letra, &rot);
	
	letra = rotacao(65,90,letra,rot);
	letra = rotacao(97,122,letra,rot);

	printf ("%c", letra);
	
	return 0;

}