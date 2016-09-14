#include <iostream>
using namespace std;

int main(){
	
    int valor,primeiro,segundo,result1,result2;
	cin >> valor;
	cin >> primeiro;
	cin >> segundo;

    if(primeiro == segundo)
        cout << "invalido";

    if(valor < primeiro){
        result1 = (valor - primeiro) * (-1);
    }else{
        result1 = (valor - primeiro);
    }

    if(valor < segundo){
        result2 = (valor - segundo) * (-1);
    }else{
        result2 = (valor - segundo);
    }

    if(result1 < result2)
        cout << "primeiro";
    
    if(result2 < result1)
        cout << "segundo";
        
return 0;
}
