#include <stdio.h>


int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int qtd = 0;
    if (a == b)
        qtd++;
    if(b == c)
        qtd++;
    if(a == c)
        qtd++;
    printf("%d\n", qtd);
    return 0;
}
