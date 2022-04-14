/*
21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
conversão é: K = L * 0.45, sendo K a massa em quilogramas e L a massa em libras.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float libra, resultado;

    printf("Insira o volume em Libras\n");
    scanf("%f",&libra);
    resultado = libra * 0.45;
    printf("Em Libras: %.2f \nEm Quilogramas: %.2f\n", libra, resultado);


    return 0;
}
