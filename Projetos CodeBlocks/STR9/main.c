//Gabriel Xavier Domingues
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void inverter_palavra(char *palavra){
    int cont = 0, tamanho;
    tamanho = strlen(palavra) - 1;
    while(palavra[cont] != '\0'){
        if(cont == 0){
            printf("%c", palavra[tamanho]);
        }
        else if(cont == tamanho){
            printf("%c", palavra[0]);
        }
        else if(cont != 0 && cont != tamanho){
        printf("%c", palavra[cont]);
        }
        cont++;
    }
}
int main(){
    char palavra[30];
    printf("Informe a palavra: ");
    gets(palavra);
    inverter_palavra(palavra);
    return 0;
}
