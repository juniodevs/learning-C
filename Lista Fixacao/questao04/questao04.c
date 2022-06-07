/*
4. Faça um programa que receba um vetor A com 10 números e um número x. Depois, armazene em um
vetor B o resultado de cada elemento de A multiplicado pelo valor x e imprima o vetor B.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10], B[10], x = 0, i = 0;
    printf("Digite o Valor de X:");
    scanf("%d", &x);
    printf("Digite os 10 valores\n");
    
    while (i<10)
    {
        scanf("%d", &A[i]);

        B[i] = A[i] * x;
        i++;
    }

    i = 0;

    printf("O Resultado\n");

    while (i<10)
    {
        printf("%d ",B[i]);
        i++;
    }
    return 0;
}
