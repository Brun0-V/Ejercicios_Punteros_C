#include <stdio.h>

int main() 
{
    float a = 1.4, b = 2.6;
    printf("Numeros antes de intercambiar: Num1 = %.2f  Num2 = %.2f\n", a, b);
    float *Pa = &a, *Pb = &b;
    float temp = *Pa;
    *Pa = *Pb;
    *Pb = temp;
    printf("Numeros despues de intercambiar: Num1 = %.2f  Num2 = %.2f\n", a, b);
    return 0;
}