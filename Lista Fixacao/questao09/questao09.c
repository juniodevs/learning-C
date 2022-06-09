/*
9. Gere um vetor A de tamanho 20 com números inteiros aleatórios entre 0 e 10 e receba do usuário um
inteiro x.

Indique quantas vezes x aparece no vetor, em quais posições ele aparece e gere um vetor B
com os elementos de A removendo os valores x.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[20], x = 0, i = 0, B[20], posicao = 0, lugar[20];

    srand(time(NULL));

    while (i<20)
    {
        A[i] = rand()%10;
        printf("%d ", A[i]);
        lugar[i] = -1;
        i++;
    }

    printf("\nDigite o valor de X:");
    scanf("%d", &x);

    i = 0;
    while (i<20)
    {
        if (x == A[i])
        {
            posicao++;
            lugar[i] = i;
        }
        B[i] = A[i];
        i++;
    }

    i = 0;

    while (i<20)
    {
        if (B[i] == x )
        {
            B[i] = -1;
        }
        i++;
    }
    i = 0;

    printf("X apareceu %d vezes\n", posicao);

    printf("Nestas seguintes posicoes\n");

    while (i < 20)
    {
        if (lugar[i] != -1)
        {
            printf("%d ", lugar[i]);
        }
        i++;
    }

    i = 0;

    printf("\nEstes e B sem os valores de x\n");

    while (i<20)
    {
        if (B[i] != -1)
        {
            printf("%d ",B[i]);
        }
        i++;
    }

    return 0;
}