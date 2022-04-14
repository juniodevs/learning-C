/*17. Leia um valor de comprimento em centımetros e apresente-o convertido em polegadas.
A formula de conversao e: P = C / 2.54 , sendo C o comprimento em centimetros e P o
comprimento em polegadas
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float centimetros, resultado;

    printf("Digite o seu comprimento em centimetros\n");
    scanf("%f", &centimetros);
    resultado = centimetros / 2.54;
    printf("Em centimetros: %.2f \nEm polegadas e: %.2f\n", centimetros, resultado);


    return 0;
}
