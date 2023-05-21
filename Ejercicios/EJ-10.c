#include <stdio.h>

int contarVocales(char *Pstr);

int main() {
    char cadena[] = "Este es un string de prueba"; //Contine 9 vocales
    printf("Número de vocales encontradas: %d\n", contarVocales(cadena));
    return 0;
}

int contarVocales(char *Pstr) {
    int count = 0;
    while (*Pstr != '\0') {
        if (*Pstr == 'a' || *Pstr == 'e' || *Pstr == 'i' || *Pstr == 'o' || *Pstr == 'u' || *Pstr == 'A' || *Pstr == 'E' || *Pstr == 'I' || *Pstr == 'O' || *Pstr == 'U')
            count++;
        Pstr++;
    }
    return count;
}