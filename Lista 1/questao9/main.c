/*9. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula de
conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cel, resultado;

    printf("Digite os graus em Celsius\n");
    scanf("%f", &cel);
    resultado = cel + 273.15;
    printf("Em Celsius e: %.2f \nEm Kelvin e: %.2f\n", cel, resultado);

    return 0;
}
