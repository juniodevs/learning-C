/*
42. Escreva um programa de ajuda para vendedores.
A partir de um valor total lido, mostre:
a. o total a pagar com desconto de 10%;
b. o valor de cada parcela, no parcelamento de 3x sem juros;
c. a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
d. a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto, desconto, parcelado, comissaodesconto, comissaoparcelado;
    printf("Digite o Valor do produto\n");
    scanf("%f",&produto);

    desconto = produto - (produto * 0.10);
    printf("Valor com 10 porcento de desconto e: R$%.2f\n", desconto);

    parcelado = produto / 3;
    printf("Valor em 3x sem juros e: R$%.2f\n", parcelado);

    comissaodesconto = desconto * 0.05;
    printf("Comissao do vendedor com desconto e: R$%.2f\n", comissaodesconto);

    comissaoparcelado = produto * 0.05;
    printf("Comissao do vendedor parcelado e: R$%.2f\n", comissaoparcelado);

    return 0;
}
