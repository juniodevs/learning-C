/*
40. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas
no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horadia;
    printf("Quanto voce recebe por hora?\n");
    scanf("%f",&horadia);

    printf("Voce recebe por hora: R$%.2f\n", horadia);
    float horames;
    printf("Quantas horas voce trabalhou durante este mes?\n");
    scanf("%f", &horames);

    float horastrab = horadia * horames;
    float bonus, salariofinal;
    bonus = horastrab * 0.10;

    salariofinal = horastrab + bonus;
    printf("Voce recebera esse mes: R$%.2f", salariofinal);
    printf("\n\n");
}
