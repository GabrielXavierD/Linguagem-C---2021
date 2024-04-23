//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cidade[900], estado[900];
    int tamanho;
    printf("Digite o nome de uma cidade: ");
    gets (cidade);
    printf("Digite um estado: ");
    gets (estado);
    strcat(cidade, "");
    strcat(estado, "");
    printf("Entrada1: %s\n", cidade);
    printf("Entrada2: %s\n", estado);
    printf("Saida: %s - %s", cidade, estado);
    return 0;
}
