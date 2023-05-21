#include <stdio.h>

int main() 
{
    int num = 4;
    int *Pnum = &num;
    printf("Numero original: %d\n", num);
    *Pnum = *Pnum * 2;
    printf("Numero duplicado: %d\n", num);
    return 0;
}