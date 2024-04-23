//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    switch (letra) {
    case 'a':
        printf("E uma vogal");
        break;
    case 'e':
        printf("E uma vogal");
        break;
    case 'i':
        printf("E uma vogal");
        break;
    case 'o':
        printf("E uma vogal");
        break;
    case 'u':
        printf("E uma vogal");
        break;
    default:
        printf("Nao e uma vogal");
        break;
    }
    return 0;
}
