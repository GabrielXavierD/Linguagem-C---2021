//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valoraplicado,prazo,taxa_juros,rend,valorfinal;
    printf("Qual o valor aplicado \nR$");
    scanf("%f",&valoraplicado);
    printf("O prazo de aplicacao e \n");
    scanf("%f",&prazo);
    taxa_juros=(3.5/100);
    rend=(taxa_juros*prazo*valoraplicado);
    valorfinal=(valoraplicado+rend);
    printf("O valor apos o prazo de aplicacao sera de R$ %.2f reais \n", valorfinal);
    return 0;
}
