#include<stdio.h> //printf e scanf
#include<locale.h> //tratar acentuação

//Compilar = verificar erro de sintaxe no código e executar = rodar o código
int main(void){
    setlocale(LC_ALL, "Portuguese"); //tratando a acenturação pt-br
    int a;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    if(a == 10){
        printf("São iguais!");
    }else if(a != 10){ //se a for diferente de 10, faça:
            printf("Não são iguais");
    }
}
