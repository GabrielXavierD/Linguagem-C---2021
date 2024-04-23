//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int resp;
   float pesoid, h;
   char a;
    do{
    printf("Digite a sua altura, usando ponto(Exemplo 1.75): ");
    scanf("%f", &h);
    printf("Qual o seu sexo? M para masculino e F para feminino (digite em MAIUSCULO): ");
    scanf(" %c", &a);
    switch (a) {
    case 'M':
    pesoid = (72.7 * h) - 58;
    printf("O peso ideal eh: %2.f\n", pesoid);
    break;
    case 'F':
    pesoid = (62.1 * h) - 44.7;
    printf("O peso ideal eh: %2.f\n", pesoid);
    break;
    default:
        printf("Erro");
        }
    printf("\nDigite 1 para continuar ou qualquer outro numero para sair: \n");
    scanf("%d", &resp);
    }while (resp==1);
    return 0;
}
