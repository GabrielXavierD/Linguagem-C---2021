//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, divisao;
    char resp;
    do {
    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite um valor: ");
    scanf("%d", &b);
    switch (a){
    case 0:
        printf("\nVALOR INVALIDO");
        printf("\nDigite um valor: ");
        scanf("%d", &a);
        printf("Digite um valor: ");
        scanf(" %d", &b);
        break;
        }
    switch (b){
    case 0:
        printf("VALOR INVALIDO");
        printf("\nDigite um valor: ");
        scanf("%d", &a);
        printf("Digite um valor: ");
        scanf(" %d", &b);
    break;
        }
        divisao = a/b;
        printf("O resultado eh: %d", divisao);
    printf("\nVOCE DESEJA OUTRO CALCULO(S/N)?\n");
    scanf(" %c", &resp);
    }while (resp=='S');
    return 0;
}
