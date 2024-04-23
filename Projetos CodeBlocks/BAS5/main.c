//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valoraplicado,prazodias,taxa_juros,tx_juros_,jurosprazo,rend,valorfinal;
    printf("Qual o valor a ser aplicado \n R$");
    scanf("%f",&valoraplicado);
    printf("Qual o prazo em dias que o valor deve ser aplicado \n");
    scanf("%f",&prazodias);
    taxa_juros=(120/100);
    tx_juros_=(taxa_juros/360);
    jurosprazo=(prazodias*tx_juros_);
    rend=(valoraplicado*jurosprazo);
    valorfinal=(valoraplicado+rend);
    printf("O valor aplicado no final do periodo sera de R$ %.2f \n",valorfinal);
    return 0;
}
