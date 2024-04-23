//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, idade;
    for (cont=0; cont<5; cont++){
    printf("\nDigite a idade da pessoa: ");
    scanf("%d", &idade);
    if (idade<18)
        printf("Menor de idade\n");
    else
        printf("Maior de idade\n");
    }
    return 0;
}
