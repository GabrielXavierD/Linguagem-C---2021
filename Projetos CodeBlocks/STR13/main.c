//Gabriel Xavier Domingues
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void removaCaractere(char *frase, char caractere){
    int cont = 0, cont2 = 0, tamanho;
    tamanho = strlen(frase);
    while(frase[cont] != '\0'){
        if(frase[cont] == caractere){
            for(cont2 = cont; cont2 < tamanho; cont2++){
                frase[cont2] = frase[cont2 + 1];
            }
        }
        cont++;
    }
    printf("Frase com o caractere removido: %s", frase);
}
int main(){
    char frase[500], caractere;
    printf("Informe uma frase: ");
    gets(frase);
    printf("Informe o caractere a ser removido: ");
    scanf("%c", &caractere);
    removaCaractere(frase, caractere);
    return 0;
}
