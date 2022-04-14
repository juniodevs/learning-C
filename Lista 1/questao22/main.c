/*
22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
conversão é: M = 0.91 * J, sendo J o comprimento em jardas e M o comprimento em metros.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jardas, resultado;

    printf("Insira o volume em Jardas\n");
    scanf("%f",&jardas);
    resultado = jardas * 0.91;
    printf("Em Jardas: %.2f \nEm Metros: %.2f\n", jardas, resultado);


    return 0;
}
