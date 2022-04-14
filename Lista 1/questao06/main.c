
/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula
de conversão é: F = C * (9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cel, resultado;

    printf("Digite os graus em Celcius\n");
    scanf("%f", &cel);
    resultado = cel * (9.0 / 5.0) + 32.0;
    printf("Em celcius e: %.2f \nEm Fahrenheit e: %.2f\n", cel, resultado);

    return 0;
}
