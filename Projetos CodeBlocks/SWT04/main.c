//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, imposto,sexo;
    printf("Escreva o salario: ");
    scanf("%i", &a);
    printf("Qual o seu sexo? \n1=Masculino \n2=Feminino: ");
    scanf("%i", &sexo);
    switch (sexo) {
    case 1:
        imposto=a*0.10;
        break;
    case 2:
        imposto=a*0.05;
        break;
     default:
        printf("Opcao Invalida");
        break;
    }
    printf("O imposto e: %i", imposto);
    return 0;
}
