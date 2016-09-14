
## Ordenando vetores

### Ordenando arrays em C
Se precisar de uma função de ordenação em C você pode usar o qsort.

```c++
#include <stdlib.h>
#include <stdio.h>

int compara(const void *x, const void *y) {
    return (int) *(int *)x - *(int *)y;
}

int main( void )
{
    int tamanho = 50;
    int vetor[tamanho];
    int qtd;
    scanf("%d", &qtd); //a quantidade de elemento no vetor
    //... carregando os elementos no vetor
    //a função abaixo ordena o vetor
    qsort (vetor, (size_t) qtd, sizeof(int), compara);

    //agora o vetor já está ordenado
}
```

### Ordenando listas em Python

Ordenar em python é tão fácil que dá vontade de chorar. A própria lista vem com uma função sort.

```python
# lista com os elementos
elements = [100, 200, 0, -100]

# Ordenando do menor para o maior
elements.sort()
print(elements)
```


### Ordenando vector em C++
A biblioteca algorithm vem com várias funções úteis. Uma delas é a função sort.

```c++
#include <algorithm> // std::sort

vector<int> vet;

//para ordenar voce usa o sort
std::sort(vet.begin(), vet.end());

```
