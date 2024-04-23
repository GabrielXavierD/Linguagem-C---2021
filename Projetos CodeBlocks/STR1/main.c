//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase[900];
    int tamanho;
    printf("Digite uma frase: ");
    gets (frase);
    tamanho = strlen (frase);
    printf("Quantidade de caracteres: %i", tamanho);
    return 0;
}
