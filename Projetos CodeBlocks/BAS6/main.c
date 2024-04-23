//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int horas,minutos;
    printf("Insira um horario (descartando os minutos) \n");
    scanf("%d",&horas);
    minutos=(horas*60);
    printf("Do inicio do dia ate a hora infomada ja se passaram %.d minutos \n", minutos);
    return 0;
}
