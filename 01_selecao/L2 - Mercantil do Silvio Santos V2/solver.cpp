#include <iostream>
using namespace std;

int main(){
	
	float primeiro,valor;
	char segundo;
	cin >> primeiro;
	cin >> segundo;
	cin >> valor;

    if((primeiro > valor && segundo == 'm') || (primeiro < valor && segundo == 'M'))
        cout << "segundo";
    else
        cout << "primeiro";
return 0;
}