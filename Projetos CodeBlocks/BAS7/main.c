//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ano_nasc,ano_atual,anos,meses,dias,semanas;
    printf("Qual o ano do seu nascimento \n");
    scanf("%f",&ano_nasc);
    printf("Qual o ano atual \n");
    scanf("%f",&ano_atual);
    anos=(ano_atual - ano_nasc);
    meses=(anos*12);
    dias=(anos*365);
    semanas=(meses*4);
    printf("A idade da pessoa em anos e %.f \n",anos);
    printf("A idade da pessoa em meses e %.f \n",meses);
    printf("A idade da pessoa em dias e %.f \n",dias);
    printf("A idade da pessoa em semanas e %.f \n",semanas);
    return 0;
}
