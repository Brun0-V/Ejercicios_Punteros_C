#include <stdio.h>

int main() 
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *Parr = &arr;
    int suma = 0;
    for(int i = 0; i < 10; i++){
        suma += *Parr;
        ++ Parr;
    }
    printf("La suma de los numeros del array es: %d\n", suma);
    return 0;
}