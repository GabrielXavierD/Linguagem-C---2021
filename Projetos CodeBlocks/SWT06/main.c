//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int mesada, p, a;
    printf("Digite o valor da sua mesada: ");
    scanf("%i",&mesada);
    printf("Se deseja comprar um produto novo digite 1: ");
    scanf("%i",&p);
    if (p!=1)
        printf("Fim do Programa");
    else
        printf("Produtos disponiveis: 1.Camiseta Azul-$15,00 2.Calca Jeans-$30,00 3.Tenis $150,00 4.Lapis-$2,00 5.Borracha-$4,00:  ");
    scanf("%i",&a);
    switch (a) {
    case 1:
    if (mesada>=15)
    {
        mesada=mesada-15;
        printf("Voce comprou uma Camiseta Azul e ainda tem %i restante", mesada);
    }
     else
        printf("Voce não tem dinheiro suficiente");
     break;
    case 2:
        if (mesada>=30)
    {
        mesada=mesada-30;
        printf("Voce comprou uma Calca Jeans e ainda tem %i restante", mesada);
    }
     else
        printf("Voce não tem dinheiro suficiente");
     break;
    case 3:
        if (mesada>=150)
    {
        mesada=mesada-150;
        printf("Voce comprou um Tenis e ainda tem %i restante", mesada);
    }
     else
        printf("Voce não tem dinheiro suficiente");
     break;
    case 4:
        if (mesada>=2)
    {
        mesada=mesada-2;
        printf("Voce comprou um Lapis e ainda tem %i restante", mesada);
    }
     else
        printf("Voce não tem dinheiro suficiente");
     break;
    case 5:
        if (mesada>=4)
    {
        mesada=mesada-4;
        printf("Voce comprou uma Borracha e ainda tem %i restante", mesada);
    }
     else
        printf("Voce não tem dinheiro suficiente");
     break;
    }
    return 0;
}
