//Gabriel Xavier Domingues
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void removaLetra(char *frase, char Lposicao){
    int cont = 0, tamanho;
    tamanho = strlen(frase);
    while(frase[cont] != '\0'){
        if(cont == Lposicao - 1){
            frase[cont] = '\0';
            frase[cont] = tamanho;
        }
        cont++;
    }
    printf("Palavra com a letra removida: %s", frase);
}
int main(){
    char frase[100];
    int Lposicao;
    printf("Informe a palavra: ");
    gets(frase);
    printf("Informe a posicao da letra: ");
    scanf("%i", &Lposicao);
    removaLetra(frase, Lposicao);
    return 0;
}
