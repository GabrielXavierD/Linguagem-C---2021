#include<stdio.h> //printf e scanf
#include<locale.h> //tratar acentua��o

//Compilar = verificar erro de sintaxe no c�digo e executar = rodar o c�digo
int main(void){
    setlocale(LC_ALL, "Portuguese"); //tratando a acentura��o pt-br
    int a;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    if(a == 10){
        printf("S�o iguais!");
    }else if(a != 10){ //se a for diferente de 10, fa�a:
            printf("N�o s�o iguais");
    }
}
