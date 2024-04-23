//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf ("Informe um numero: ");
    scanf("%d",&num);
    if(num>=100 && num<=200){
    printf("Voce digitou um numero entre 100 e 200");
    }
    else {
    printf("Voce digitou um numero fora da faixa 100 e 200");
    }
    return 0;
}

