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
    printf("Digite o nome de sua cidade: ");
    scanf("%s", &cidade);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\n\n |RESULTADO|\n\n");
    printf("Voce eh %s e mora no estado %s, na cidade %s e tem %d anos.", nacionalidade, estado, cidade, idade);
    return 0;
}
