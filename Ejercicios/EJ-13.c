#include <stdio.h>

int encontrarMayor(int *ptr);

int main() {
    int num1[] = {2, 6, 77, 8, 9, 12};
    printf("El valor máximo es: %d\n", encontrarMayor(&num1));
    return 0;
}

int encontrarMayor(int *ptr) {
    int mayor = *ptr;
    for (int i = 0; i < 6; i++){
        if (*ptr > mayor)
            mayor = *ptr;
        ptr++;
    }
    return mayor;
}