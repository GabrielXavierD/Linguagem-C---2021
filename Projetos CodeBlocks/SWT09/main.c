//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main(){

    int nm,nd;
    printf("Digite o numero da sua matricula: ");
    scanf(" %i", &nm);
    printf("Digite o numero da disciplina: ");
    scanf(" %i", &nd);
    printf("O aluno de matricula %i esta matriculado em: %i ", &nd);
    switch (nd) {
    case '1':
        printf("Matematica");
        break;
    case '2':
        printf("Linguagem de Programacao");
        break;
    case '3':
        printf("Portugues");
        break;
    case '4':
        printf("Ingles");
        break;
    default:
        printf("Numero de Materia Invalido");
        break;
    }
    return 0;
}
