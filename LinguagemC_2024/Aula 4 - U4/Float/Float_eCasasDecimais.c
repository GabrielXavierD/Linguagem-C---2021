#include <stdio.h> // printf e scanf
#include <locale.h> // tratar acentua��o

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // tratando a acentua��o pt-br
    float n1, n2, soma;

    printf("Digite um n�mero: ");
    scanf("%f", &n1); // %f � o especificador de formato correto para float
    printf("Digite um n�mero: ");
    scanf("%f", &n2); // %f � o especificador de formato correto para float

    soma = n1 + n2;

    printf("O resultado �: %.2f\n", soma); // %.2f para formatar a sa�da float com duas casas decimais
}
