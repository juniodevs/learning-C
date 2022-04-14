/*
23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de
conversão é: J = M / 0.91 , sendo J o comprimento em jardas e M o comprimento em metros.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metros, resultado;

    printf("Insira o volume em Metros\n");
    scanf("%f",&metros);
    resultado = metros / 0.91;
    printf("Em Metros: %.2f \nEm Jardas: %.2f\n", metros, resultado);


    return 0;
}
