#include <iostream>
using namespace std;

int bingo(int vet[6], int mat[4][4]){

    int cont = 0;

    for(int k = 0; k < 6; k++)
        for(int i = 0; i < 4; i++)
            for(int j = 0; j < 4; j++)
                if(vet[k] == mat[i][j])
                    cont++;
    cout<< cont;
    return cont;
}

int main(){

int vet[6];
    for(int i=0;i < 6;i++)
        cin >> vet[i];
int mat[4][4];
    for(int i =0; i < 4;i++)
        for(int j=0;j < 4;j++)
            cin >> mat[i][j];

bingo(vet,mat);
}