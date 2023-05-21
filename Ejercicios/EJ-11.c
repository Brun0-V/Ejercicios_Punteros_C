#include <stdio.h>

void eliminarEspacios(char *cadena);

int main() {
    char cadena[] = "Esta es una cadena con espacios";
    printf("Cadena original: %s\n", cadena);
    eliminarEspacios(cadena);
    printf("Cadena sin espacios: %s\n", cadena);
    return 0;
}

void eliminarEspacios(char *cadena) {
    char *sinEspacios = cadena;
    while (*cadena != '\0') {
        if (*cadena != ' ') {
            *sinEspacios = *cadena;
            sinEspacios++;
        }
        cadena++;
    }
    *sinEspacios = '\0';
}