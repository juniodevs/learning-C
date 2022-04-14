/*
24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres.
A fórmula de conversão é: A = M * 0.000247, sendo M a área em metros quadrados e A a área em acres.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m2, resultado;

    printf("Insira o volume em Metros quadrados\n");
    scanf("%f",&m2);
    resultado = m2 * 0.000247;
    printf("Em Metros quadrados: %.2f \nEm Acres: %f\n", m2, resultado);


    return 0;
}
