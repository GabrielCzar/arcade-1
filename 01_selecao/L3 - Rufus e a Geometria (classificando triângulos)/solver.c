#include <stdio.h>

int main(){
    int l1, l2, l3;

    scanf ("%d %d %d", &l1, &l2, &l3);

    if (l1 + l2 >= l3 && l1 + l3 >= l2 && l2 + l3 >= l1) {
        if (l1 == l2 && l2 == l3)
            printf ("equilatero");
        else if (l1 == l2 || l2 == l3 || l3 == l1)
            printf ("isosceles");
        else
            printf ("escaleno");
    }
    else
        printf ("invalido");
    return 0;
}
