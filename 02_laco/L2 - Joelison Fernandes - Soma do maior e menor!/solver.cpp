#include <iostream>
using namespace std;
int menor(int v[], int tam)
{
int menor=v[0];
   for(int i=0; i<tam; i++){
       if(v[i] < menor){
           menor = v[i];
         }
     }
     return menor;
 }
 int maior(int v[], int tam)
 {
 int maior=v[0];
     for (int i = 0 ; i < tam ; i++){
          if ( v[i] > maior ) {
              maior = v[i];
          }
     }
     return maior;
 }
 int soma_maior_menor(int v[], int tam) {

    int maior1 = maior(v,tam);
    int menor1 = menor(v,tam);
    cout << maior1 + menor1 << endl;
    return maior1+menor1;
 }

 int main(){
   int a,b,c,d,e;

   cin >> a >> b >> c >> d >> e ;

   int v[] = {a,b,c,d,e};
   soma_maior_menor(v, 5);

 }
