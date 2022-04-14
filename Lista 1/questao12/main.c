/*12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão
é: K = 1.61 * M, sendo K a distância em quilômetros e M em milhas.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float milhas, resultado;
    printf("Digite suas milhas\n");
    scanf("%f", &milhas);
    resultado = 1.61 * milhas;
    printf("Em milhas e: %.2f \nEm Quilometros e: %.2f\n", milhas, resultado);

    return 0;
}
