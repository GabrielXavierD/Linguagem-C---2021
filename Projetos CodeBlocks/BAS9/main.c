//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor_inicial, indice, inflacao, valor_final;
    printf("Digite o valor inicial: ");
    scanf("%lf", &valor_inicial);
    printf("Digite o indice de inflacao: ");
    scanf("%lf", &indice);
    inflacao = indice/100;
    valor_final = valor_inicial + (valor_inicial * inflacao);
    printf("Preço reajustado: %.2lf", valor_final);
    return 0;
}
