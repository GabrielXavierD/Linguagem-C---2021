#include <stdio.h> // printf e scanf
#include <locale.h> //tratar acentuação
main(){
setlocale(LC_ALL, "Portuguese"); //tratando a acenturação pt-br
int n1, n2, soma;
    printf("Digite um número: ");
    scanf("%i", &n1);
    printf("Digite um número: ");
    scanf("%i", &n2);

    soma = (n1+n2);

    printf("O resultado eh: %i", soma); //devemos colocar %i ou %d pra colocar o valor da variavel int
}
