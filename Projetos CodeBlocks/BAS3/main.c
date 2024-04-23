//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldoap, reajuste, saldonovo;
    printf("O valor do saldo aplicado \n R$");
    scanf("%f",&saldoap);
    reajuste=(saldoap*2/100);
    saldonovo=(saldoap+reajuste);
    printf("Apos um mes aplicado o saldo sera de R$ %.2f \n", saldonovo);
    return 0;
}
