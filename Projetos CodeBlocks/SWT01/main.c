//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    printf("Digite s ou n: ");
    scanf("%c",&letra);
    switch (letra) {
    case 's':
        printf("Programa Aberto");
        break;
    case 'n':
        printf("Programa Fechado");
        break;
    default:
        printf("Opcao Invalida");
        break;
    }
    return 0;
}
