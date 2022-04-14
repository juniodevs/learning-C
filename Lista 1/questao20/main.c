/*
20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de
conversão é: L = K / 0.45 , sendo K a massa em quilogramas e L a massa em libras.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mq, resultado;

    printf("Insira o volume em Quilogramas\n");
    scanf("%f",&mq);
    resultado = mq / 0.45;
    printf("Em quilogramas: %.2f \nEm libras: %.2f\n", mq, resultado);


    return 0;
}
