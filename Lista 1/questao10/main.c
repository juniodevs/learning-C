
/*10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s (metros
por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M em m/s*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, resultado;

    printf("Digite em Km/h\n");
    scanf("%f",&km);
    resultado = km/3.6;
    printf("Em Km/h e: %.2f \nEm M/s e: %.2f\n", km, resultado);


    return 0;
}
