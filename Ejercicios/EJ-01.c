#include <stdio.h>

int main() 
{
    int var;
    int *Pvar;
    var = 7;
    Pvar = &var;

    printf("El valor de la variable es %d\n", var);
    printf("El valer al que apunta el puntero es %d\n", *Pvar);
    return 0;
}