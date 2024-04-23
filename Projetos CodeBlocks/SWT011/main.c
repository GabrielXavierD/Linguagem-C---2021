//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main(){
    char idade;
    printf("Qual sua dezena de idade? ");
    scanf(" %c", &idade);
    switch (idade) {
    case '0':
        printf("Crianca");
        break;
    case '1':
        printf("Adolescente");
        break;
    case '2':
        printf("Jovem");
        break;
    case '3':
        printf("Adulto");
        break;
    case '4':
        printf("Experiente");
        break;
    default:
        printf("Nao e uma vogal");
        break;
    }
    return 0;
}
