//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int re;
    printf ("digite o numero de 1 ao 12: ");
    scanf("%i", &re);
   switch (re) {
    case 1:
    if (re=1)
    printf ( "%i e o mes de janeiro", re);
    break;
case 2:
    if (re=2)
    printf ( "%d e o mes de fevereiro", re);
    break;
    case 3:
    if (re=3)
    printf ( "%d e o mes de marco", re);
    break;
    case 4:
    if (re=4)
    printf ( "%d e o mes de abril", re);
    break;
    case 5:
    if (re=5)
    printf ( "%d e o mes de maio", re);
    break;
    case 6:
    if (re=6)
    printf ( "%d e o mes de junho", re);
    break;
    case 7:
    if (re=7)
    printf ( "%d e o mes de julho", re);
    break;
    case 8:
    if (re=8)
    printf ( "%d e o mes de agosto", re);
    break;
    case 0:
    if (re=9)
    printf ( "%d e o mes de setembro", re);
    break;
    case 10:
    if (re=10)
    printf ( "%d e o mes de outubro", re);
    break;
    case 11:
    if (re=11)
    printf ( "%d e o mes de novembro", re);
    break;
    case 12:
    if (re=12)
    printf ( "%d e o mes de dezembro", re);
    break;
     default:
        printf("Opcao Invalida");
        break;
    }

    return 0;
}
