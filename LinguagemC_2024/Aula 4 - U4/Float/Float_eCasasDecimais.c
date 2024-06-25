#include <stdio.h> // printf e scanf
#include <locale.h> // tratar acentuação

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // tratando a acentuação pt-br
    float n1, n2, soma;

    printf("Digite um número: ");
    scanf("%f", &n1); // %f é o especificador de formato correto para float
    printf("Digite um número: ");
    scanf("%f", &n2); // %f é o especificador de formato correto para float

    soma = n1 + n2;

    printf("O resultado é: %.2f\n", soma); // %.2f para formatar a saída float com duas casas decimais
}
