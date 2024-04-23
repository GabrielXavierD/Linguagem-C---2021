//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f=1, cont;
    printf("Digite um numero para calcular o fatoral: ");
    scanf("%d",&n);
    for(cont=1; cont<=n; cont++){
        f=f*cont;
        }
    printf("O fatorial de %d eh %d",n,f);
    return 0;
}
