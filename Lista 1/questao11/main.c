
/*11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora). A fórmula de conversão é: K = M * 3.6, sendo K a velocidade em km/h e
M em m/s*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ms, resultado;

    printf("Digite em M/s\n");
    scanf("%f",&ms);
    resultado = ms*3.6;
    printf("Em M/s e: %.2f \nEm km/h e: %.2f\n", ms, resultado);


    return 0;
}
