#include <stdio.h>

void inicializarArray(int *ptr, int size, int valor);

int main() {
    int array[5];
    int valorInicial = 10;
    inicializarArray(array, 5, valorInicial);
    printf("Array inicializado:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}

void inicializarArray(int *ptr, int size, int valor) {
    for (int i = 0; i < size; i++) {
        *(ptr + i) = valor;
    }
}
