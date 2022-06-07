/*
5. Desenvolva um programa para receber 20 números e armazená-los em um vetor. Depois, imprimir os
números na ordem inversa ao que foram informados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, num[20];

    printf("Digite os 20 Numeros\n");

    while (i<20)
    {
        scanf("%d", &num[i]);
        i++;
    }

    printf("Ordem Inversa\n\n");

    i--;

    while (i>=0)
    {
        printf("%d\n", num[i]);
        i--;
    }
    return 0;
}
