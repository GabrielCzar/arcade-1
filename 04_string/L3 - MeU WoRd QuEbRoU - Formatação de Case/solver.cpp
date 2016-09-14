#include <iostream>
using namespace std;

enum Formato {TodaMaiuscula, TodaMinuscula, PrimeiraMaiuscula};

string formatar(string texto, char formato){
    string saida(texto);
    if(formato == 'M'){
        for(int i = 0; i < (int)saida.size(); i++){
            char & c = saida[i];
            if(isalpha(c)){
                c = toupper(c);
            }
        }
        return saida;
    }
    if(formato == 'm'){
        for(int i = 0; i < (int)saida.size(); i++){
            char & c = saida[i];
            if(isalpha(c)){
                c = tolower(c);
            }
        }
        return saida;
    }
    if(formato == 'i'){
        for(int i = 0; i < (int)saida.size(); i++){
            char & c = saida[i];
            if(islower(c)){
                c = toupper(c);
            }
            else if(isupper(c)){
                c = tolower(c);
            }
        }
        return saida;
    }
    if(formato == 'p'){
        for(int i = 0; i < (int) saida.size(); i++){
            char *c = &saida[i];
            if(isalpha(*c)){
                if(i == 0){ //primeira da string
                    *c = toupper(*c);
                    continue;
                }
                char b = saida[i - 1];

                if(isspace(b) || ispunct(b)){
                    *c = toupper(*c);
                    continue;
                } else {
                    *c = tolower(*c);
                }
            }
        }
        return saida;
    }
    return "";
}

int main(){
    string texto;
    char operacao;
    getline(cin, texto);
    cin >> operacao;
    cout << formatar(texto, operacao);
    return 0;
}
