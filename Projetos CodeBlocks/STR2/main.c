//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase[900], frase2[900];
    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);
    int i, j, n;
    n = strlen (frase);
    j = n - 1;
    for(i=0; i<n; i++) {
    frase2[i] = frase[j];
    j = j - 1;
    }
    frase2[i] = '\0';
    printf("\n");
    printf("Entrada: %s\n", frase);
    printf("Saida: %s\n", frase2);
    return 0;
}
