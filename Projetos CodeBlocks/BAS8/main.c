//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vidautil, d_mensal, custodoforno, pagamento, renda;
    printf("Insira a vida ultil do forno em anos: ");
    scanf("%f", &vidautil);
    printf("Digite o dinheiro ganhado mensalmente: ");
    scanf("%f", d_mensal);
    printf("Digite o custo do forno: ");
    scanf("f%", custodoforno);
    pagamento = custodoforno / d_mensal;
    renda = (vidautil * 12) * d_mensal;
    printf("Ira demorar: %f", pagamento, "meses para pagar o forno.");
    printf("O forno ira render %f", renda, "durante sua vida util.");
    return 0;
}
