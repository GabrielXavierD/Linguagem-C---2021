//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int peso, multa;
   printf("Digite quantos Kg: ");
   scanf("%d",&peso);
   if (peso>50){
    multa = (peso-50)*4;
   printf("Voce ira pagar: %d", multa);
   }
   else {
    printf("Nao ha excesso de peso e nem multas para pagar");
   }
    return 0;
}

