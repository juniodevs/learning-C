/*
39. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dias, contrato, desconto;
    printf("Digite o numero de dias\n");
    scanf("%f", &dias);
    contrato = (dias * 30);
    desconto =  contrato - (contrato * 0.08);
    printf("O contrato foi de R$%.2f\n", desconto);




}

