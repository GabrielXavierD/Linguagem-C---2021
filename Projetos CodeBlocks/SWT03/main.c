//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,t;
    printf("                 *Areas*\n");
    printf("Menu:");
    printf("\n(1)Triangulo\n");
    printf("(2)Trapezio\n");
    printf("(3)Circulo\n");
    printf("(4)Losango\n");
    printf("        Opcao:");
        scanf("%i",&a);
    switch (a) {
    case 1:
    printf("Digite o valor da base do triangulo: ");
    scanf("%i", &b);
    printf("Digite a altura do triangulo: ");
    scanf("%i", &c);
    t = (b*c)/2;
    printf("Resultado= %i", t);
    break;
    case 2:
        printf("Digite o valor da base maior do trapezio: ");
    scanf("%i", &d);
    printf("Digite o valor da base menor do trapezio: ");
    scanf("%i", &e);
    printf("Digite o valor da altura do trapezio: ");
    scanf("%i", &f);
    g = (d+e)*f/2;
    printf("Resultado= %i", g);
    break;
    case 3:
        printf("Digite o valor do raio do circulo: ");
    scanf("%i", &h);
    i = (h*h)*3.14;
    printf("Resultado= %i", i);
    break;
    case 4:
        printf("Digite o valor da diagonal maior: ");
    scanf("%i", &j);
    printf("Digite o valor da diagonal menor: ");
    scanf("%i", &k);
    l = (j*k)/2;
    printf("Resultado= %i", l);
    break;
        }
        return 0;
}
