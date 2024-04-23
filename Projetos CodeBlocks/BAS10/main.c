//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double b , c, a;
    printf("Digite o valor do cateto: ");
    scanf("%lf", &b);
    printf("Digite o segundo valor do cateto: ");
    scanf("%lf", &c);
    a = sqrt((b*b + c*c));
    printf("Resultado da hipotenusa: %.2lf", a);
    return 0;
}
