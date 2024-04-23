//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, r, r1,r2,r3;
    char opc;
    printf("Digite um numero: ");
    scanf("%i",&num1);
    printf("Digite um numero: ");
    scanf("%i",&num2);
    printf("Digite o operador: ");
    scanf(" %c",&opc);
    switch (opc) {
    case '+':
        r=num1+num2;
        printf("O resultado e %c",&r);
        break;
    case '-':
        r1=num1-num2;
        printf("O resultado e %i",&r1);
        break;
    case '*':
        r2=num1*num2;
        printf("O resultado e %i",&r2);
        break;
    case '/':
        r3=num1/num2;
        printf("O resultado e %i",&r3);
        break;
    default:
        printf("Opcao Invalida");
        break;
    }
    return 0;
}
