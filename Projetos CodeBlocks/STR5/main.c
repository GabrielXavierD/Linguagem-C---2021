//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase [50];
    char letra;
    printf("Digite uma frase: ");
    gets (frase);
    printf("Digite uma letra: ");
    fflush (stdin);
    scanf ("%c", &letra);
    achaletra (frase, letra);
    return 0;
}
void achaletra (char *texto, char letra) {
int cont = 0;

while (texto [cont] != '\0'){
if (texto[cont] ==  letra){
printf ("\nA letra \"%c\" esta na posicao %i\n", letra, cont);
}
cont++;
}
}
