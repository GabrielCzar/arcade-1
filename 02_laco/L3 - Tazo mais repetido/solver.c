#include <stdio.h>
//usando vetor de ocorrencias
 
  #define LIM 50
 
int count(int vet[], int qtd, int elem){
  int i = 0;
  int cont = 0;
  for(i = 0;i < qtd; i++){
    if(vet[i] == elem)
      cont++;
  }
  return cont;
}
    
int main(){
  int qtd;
  int vet[50];
  int ocur[50];
         
  scanf("%d", &qtd);
  int i = 0;
  for(;i < qtd; i++){
    scanf("%d", vet + i);
    ocur[i] = 0;
  }
        
  for(i = 0; i < qtd; i++)
    ocur[i] = count(vet, qtd, vet[i]);
            
    int max_ocur = 0;
    int max = vet[0];
    for(i = 0; i < qtd; i++)
      if (ocur[i] > max_ocur){
        max_ocur = ocur[i];
        max = vet[i];
      }
                 
    printf("%d", max);    
    return 0;    
  }