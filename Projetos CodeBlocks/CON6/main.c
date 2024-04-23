//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main(){
    int pcusto,pvenda,lucro,prejuizo,empate;
    printf ("Preco de custo do produto: ");
    scanf ("%d",&pcusto);
    printf ("venda produto: ");
    scanf ("%d",&pvenda);
    if (lucro=pvenda>pcusto);
    prejuizo=pvenda<pcusto;
    empate=pcusto=pvenda;
    if (lucro>prejuizo){
    printf ("Teve lucro",lucro);
    }
    else if (prejuizo>lucro){
    printf ("Teve prejuizo",prejuizo);
    }
    else if (empate){
    printf ("Teve empate ",empate);
    }
    return 0;
}

