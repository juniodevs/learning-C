/*
36. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em
vista que o desconto foi de 12%
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto, resultado;

    printf("Digite o valor do produto\n");
    scanf("%f", &produto);

    resultado = produto - (produto * 0.12);

    printf("O produto com desconto e: %.2f", resultado);
    return 0;
}
