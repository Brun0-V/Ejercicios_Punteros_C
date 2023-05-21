#include <stdio.h>

void duplicarNumero(int *Pnum);

int main() 
{
    int numero = 7;
    int *Ptrnumero = &numero;
    duplicarNumero(Ptrnumero);
    printf("Numero duplicado: %d\n", numero);
    return 0;
}

void duplicarNumero(int *Pnum){
    *Pnum = *Pnum * 2;
}