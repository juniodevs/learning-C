/*
8. Faça um algoritmo que receba um vetor A com 6 números inteiros e ordene estes valores em ordem
crescente no vetor, ou seja, A[0] deverá ficar com o menor valor e A[5] com o maior valor.
-- Dica: Compare A[0] e A[1], troque os valores caso A[0] seja maior que A[1] e repita este processo
com A[1] e A[2], A[2] e A[3] etc... note que o maior valor irá se deslocando para o final do vetor.
Repetindo essas comparações algumas vezes levará à ordenação do vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6], i = 0, x = 0, aux = 0;

    printf("Digite os 6 Numeros do Vetor\n");
    while (i<6)
    {
        scanf("%d", &A[i]);
        i++;
    }

    i = 0;

    while (i<6)
    {
        while (x<6)
        {
        if (A[i]<A[x])
        {
            aux = A[i];
            A[i] = A[x];
            A[x] = aux;
        }
        x++;
        }
        x = 0;
        i++;
    }

    i = 0;
    while (i<6)
    {
        printf("%d ", A[i]);
        i++;
    }
    return 0;
}