#include <stdio.h>

int buscarElemento(int *arr, int longitud, int valor);

int main() {
    int array[] = {5, 10, 15, 20, 25};
    int longitud = sizeof(array) / sizeof(array[0]);
    int valorABuscar = 15;
    int posicion = buscarElemento(array, longitud, valorABuscar);
    if (posicion != -1)
        printf("El valor %d se encuentra en la posición %d.\n", valorABuscar, posicion);
    else
        printf("El valor %d no se encontró en el arreglo.\n", valorABuscar);
    return 0;
}

int buscarElemento(int *arr, int longitud, int valor) {
    for (int i = 0; i < longitud; i++) {
        if (arr[i] == valor)
            return i;
    }
    return -1;
}