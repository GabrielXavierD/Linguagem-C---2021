#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // tratar acentua��o

int main() { // Corrigido para int main()
    setlocale(LC_ALL, "Portuguese"); // tratando a acentua��o pt-br
    float n1, n2, media;

    printf("Digite um n�mero: ");
    scanf("%f", &n1);
    printf("Digite um n�mero: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;
    printf("A m�dia �: %.1f\n", media); // Corrigido para incluir \n

    if (media >= 0 && media < 3) { // Corrigido operador l�gico para &&
        printf("Reprovado\n");
    } else if (media >= 3 && media <= 7) { // Corrigido operador l�gico para &&
        printf("Exame\n");
    } else {
        printf("Aprovado!\n");
    }

    // %f.2 -> o ponto e o n�mero depois � o n�mero de casas que queremos depois da v�rgula
    // \n pula uma linha
}
