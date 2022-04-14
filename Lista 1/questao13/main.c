/*13. Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de conversão
é: M = K / 1.61 , sendo K a distância em quilômetros e M em milhas*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, resultado;
    printf("Digite seus quilometros\n");
    scanf("%f", &km);
    resultado =  km/1.61;
    printf("Em Km e: %.2f \nEm Milhas e: %.2f\n", km, resultado);

    return 0;
}
