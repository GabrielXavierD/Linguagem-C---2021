//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char letra, opc;
    printf("Informe a letra: ");
    scanf("%c", &letra);
    printf("Digite 'M' para letra maiuscula ou 'm' para minuscula: ");
    scanf(" %c", &opc);
     switch (opc) {
    case 'M':
     printf("Maiuscula: %c", toupper(letra));
     break;
    case 'm':
     printf("Minuscula: %c", tolower(letra));
     break;
    default:
        printf("Opcao Invalida");
        break;
     }
    return 0;
}
