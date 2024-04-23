//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    void maiusculas (char* texto);
int main (void) {
    char frase [500];
    printf ("Digite a frase: ");
    gets (frase);
    maiusculas (frase);
    return 0;
}
void maiusculas (char* texto) {
    strupr (texto);
    printf ("\n %s", texto);
}
