#include <iostream>

int main(){
    int a;
    cin >> a;
    if(a % 5 == 0)
        cout << "nao";
    else if(a % 2 == 0 || a % 3 == 0) 
        cout << "sim";
    else
        cout << "nao";
    return 0;
}
