//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariom, salariop, qtd_sal_min;
    printf ("Informe o valor do salario minimo \n R$ ");
    scanf("%f",&salariom);
    printf("Informe o valor do salario recebido pela pessoa \n R$ ");
    scanf("%f",&salariop);
    qtd_sal_min=(salariop/salariom);
    printf("Uma pessoa que recebe um salario de R$ %.2f reais \n", salariop);
    printf("Recebe %.2f salarios minimos \n", qtd_sal_min);
    return 0;
}
