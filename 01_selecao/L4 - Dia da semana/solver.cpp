#include <string>
#include <iostream>
using namespace std;

enum DiaDaSemana{ SEG = 0, TER, QUA, QUI, SEX, SAB, DOM};
string dds[] = {"SEG", "TER", "QUA", "QUI", "SEX", "SAB", "DOM"};
 
DiaDaSemana calcular_dia_da_semana(int dia, int mes, int ano) {

	//@@return SEG;

int a, b, c, d, result;
a = ano - 1900;
b = (a / 4);
if( ano % 4 == 0){
	if( (mes == 1 ) || ( mes == 2 && dia < 29 ) )
		b -= 1;
	}
	int vet[] = {0, 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
	c = vet[mes];
	d = dia - 1;
	result = (a + b + c + d) % 7;
	 
	return (DiaDaSemana) result;
}

int main() {
	int dia, mes, ano;
	cin >> dia >> mes >> ano;
	cout << dds[calcular_dia_da_semana(dia, mes, ano)] << endl;
 
	return 0;
}
