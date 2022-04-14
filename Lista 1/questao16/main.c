/*16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A fórmula
de conversão é: C = P * 2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float polegadas, resultado;

    printf("Digite o seu comprimento em polegadas\n");
    scanf("%f", &polegadas);
    resultado = polegadas * 2.54;
    printf("Em polegadas: %.2f \nEm centimetros e: %.2f\n", polegadas, resultado);


    return 0;
}
