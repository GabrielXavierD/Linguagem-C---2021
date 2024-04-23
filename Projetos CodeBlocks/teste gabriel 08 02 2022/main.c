#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char nacionalidade[100], estado[100], cidade[100];
    printf("Ola!\nSeja bem-vindo(a) ao nosso site, preencha as informacoes a seguir:\n");
    printf("\n\n |CRIANDO SUA CONTA|\n\n");
    printf("Digite sua nacionalidade: ");
    scanf("%s", &nacionalidade);
    printf("Digite o nome do estado em que voce mora: ");
    scanf("%s", &estado);
    printf("nDigite o nome de sua cidade: ");
    scanf("%s", &cidade);
    printf("Digite sua idade: ");
    scanf("%i", &idade);

    return 0;
}
