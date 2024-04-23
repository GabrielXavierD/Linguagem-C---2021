void funcao (char *palavra,char *alterar,int posicao)
{
    int cont, contl=posicao;
    for (cont=0; palavra[cont]!='\0'; cont++)
    {
    if (cont < posicao){
    printf("%c", palavra[cont]);
    }
}
    printf("%s", alterar);
    while((palavra[contl]>=posicao)&&(palavra[contl]!='\0'))
    {
    printf("%c", palavra[contl]);
    contl++;
    }
}
int main ()
{
    char palavra [50], alterar [50];
    int posicao;
    printf ("Digite algo: ") ;
    gets (palavra);
    printf ("Digite a letra que deseja acrescentar: ") ;
    gets (alterar);
    printf ("Digite a posicao onde a letra sera acrescentada: ") ;
    scanf ("i", posicao);
    funcao (palavra, alterar, posicao);
return 0;
}
