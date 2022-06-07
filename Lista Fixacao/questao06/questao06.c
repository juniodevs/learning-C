/*
6. Faça um algoritmo para ler um valor inteiro positivo n. Depois, receba dois vetores A e B, ambos
com tamanho n e gere um vetor C com a soma dos elementos do vetor A com os elementos do vetor B
(C[0] = A[0] + B[0], C[1] = A[1] + B[1]...). Imprima o vetor C.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, i = 0;

    printf("Digite N: ");
    scanf("%d", &n);

    n = n-1;

    int A[n], B[n], C[n];

    printf("Digite os Valores de A\n");

    while (i<=n)
    {
        scanf("%d", &A[i]);
        i++;
    }

    i = 0;

    printf("Digite os Valores de B\n");

    while (i<=n)
    {
        scanf("%d", &B[i]);
        i++;
    }

    i = 0;

    printf("Resultado de A + B = C\n");

    while (i<=n)
    {
        C[i] = A[i] + B[i];

        printf("%d ", C[i]);
        i++;
    }

    return 0;
}
