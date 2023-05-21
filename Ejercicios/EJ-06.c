#include <stdio.h>

int main() 
{
    char string[] = "Este es mi string";
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
        count++;
    printf("El string tine %d caracteres\n", count);
    return 0;
}