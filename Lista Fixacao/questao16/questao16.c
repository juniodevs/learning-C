/*
Desenvolva uma função que um vetor de inteiros, junto com seu tamanho,
e conte quantos números primos tem no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

verificacaodeprimos()
{
    int i = 0, x = 0, primos = 0, aux = 0;
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &x);

    int vetor[x];
    printf("Digite o vetor\n");

    while (i < x)
    {
        scanf("%d", &vetor[i]);
        i++;
    }

    i = 0;

    while (i < x)
    {
        while (aux < x)
        {
        if (vetor[i] % aux != 0)
        {
            primos++;
        }
        aux++;
        }
        i++;
        aux = 0;
     }

    printf("\n \n \nContem %d numeros primos", primos);
}

int main()
{
    verificacaodeprimos();
    return 0;
}