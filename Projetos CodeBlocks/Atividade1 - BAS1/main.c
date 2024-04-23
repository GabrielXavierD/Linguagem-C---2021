//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float TEMPO, VELOCIDADE, DISTANCIA, LITROS_USADOS;
    printf("Digite  tempo gasto na viagem em horas: ");
    scanf("%f", &TEMPO);
    printf("Digite a velocidade média durante a viagem: ");
    scanf("%f", &VELOCIDADE);
    DISTANCIA = TEMPO * VELOCIDADE;
    LITROS_USADOS = DISTANCIA / 12;
    printf("velocidade media: %.2f\n", VELOCIDADE);
    printf("Tempo gasto: %.2fh\n", TEMPO);
    printf("Distancia percorrida: %.2fkm\n", DISTANCIA);
    printf("Combustivel utilizado: %.2fl", LITROS_USADOS);
    return 0;
}
