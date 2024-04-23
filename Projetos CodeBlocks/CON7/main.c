//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas,n,salario;
    salario=0;
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horas);
    printf("Digite o nivel do professor: ");
    scanf("%d",&n);
    if (n==1){
        salario = horas*12;
    }
    else if (salario = horas*17){
    }
    else if (salario = horas*25){
    }
    else {
        printf("Nivel invalido");
    }
    printf("O salario do professor é: %d",salario);
    return 0;
}

