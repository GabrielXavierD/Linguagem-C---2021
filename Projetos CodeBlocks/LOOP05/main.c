//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    i = 0;
    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d",&num);
    while (i<=10){
    printf("\n%d X %d = %d", num,i,num*i);
    i++;
        }
    return 0;
}
