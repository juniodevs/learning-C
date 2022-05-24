/*
21. Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas
posições pares os valores do primeiro e nas posições ímpares os valores do segundo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, A[10], B[10], C[10];
    printf("Digite os 10 Valores de A\n");

    while(i<=10)
    {
        scanf("%d", &A[i]);
        i++;
    }

    i = 1; // RESET

    printf("Digite os 10 Valores de B\n");

    while(i<=10)
    {
        scanf("%d", &B[i]);
        C[i] = 0;
        i++;
    }

    i = 1; // RESET

    while(i<=10)
    {
    if(A[i]%2==0)
    {
        C[i] = A[i];
    }
    i++;
    }

    i = 1; //RESET


    while(i<=10)
    {
    if(B[i]%2!=0)
    {
        C[i] = B[i];
    }
    i++;
    }

    i = 1; //RESET

    while(i<=10)
    {
    if(A[i]%2==0)
    {
        C[i] = A[i];
    }
    printf("%d ", C[i]);
    i++;
    }

    return 0;
}
