#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // tratar acentuação

int main() { // Corrigido para int main()
    setlocale(LC_ALL, "Portuguese"); // tratando a acentuação pt-br
    float n1, n2, media;

    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite um número: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;
    printf("A média é: %.1f\n", media); // Corrigido para incluir \n

    if (media >= 0 && media < 3) { // Corrigido operador lógico para &&
        printf("Reprovado\n");
    } else if (media >= 3 && media <= 7) { // Corrigido operador lógico para &&
        printf("Exame\n");
    } else {
        printf("Aprovado!\n");
    }

    // %f.2 -> o ponto e o número depois é o número de casas que queremos depois da vírgula
    // \n pula uma linha
}
