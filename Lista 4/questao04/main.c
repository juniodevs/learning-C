/*
4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y
quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a
soma dos valores encontrados nas respectivas posições X e Y.
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, num[8], x, y;

    printf("Digite os oito numeros\n");


    while(i<=8)
    {
     scanf("%d",&num[i]);
     i++;
    }

    printf("Digite o X\n");
    scanf("%d", &x);
    printf("Digite o Y\n");
    scanf("%d", &y);

    i = x + y;

    printf("O Resultado da soma de X e Y e: %d", i);

    return 0;
}
