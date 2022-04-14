/*
25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m2.
A fórmula de conversão é: M = A * 4048.58, sendo M a área em metros quadrados e A a área em acres.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float acres, resultado;

    printf("Insira o volume em Acres\n");
    scanf("%f",&acres);
    resultado = acres * 4048.58;
    printf("Em Acres: %.2f \nEm Metros Quadrados: %f\n", acres, resultado);


    return 0;
}
