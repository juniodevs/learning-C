/*
28. Faça um programa que receba 6 números inteiros e mostre:
1 Os números pares digitados;
2 A soma dos números pares digitados;
3 Os números ímpares digitados;
4 A quantidade de números ímpares digitados;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, num[6], pares[6], impares[6], soma = 0, quantidade = 0;

    printf("Digite 6 Numeros\n");

    while(i<=6) // reset
    {
        num[i] = 0;
        pares[i] = 0;
        impares[i] = 0;
        i++;
    }

    i = 1;

    while(i<=6)
    {
        scanf("%d",&num[i]);
        i++;
    }

    i = 1; //reset
    while (i<=6)
    {
        if(num[i]%2==0)
        {
            pares[i] = num[i];
            soma = soma + pares[i];
        }
        else
        {
            impares[i] = num[i];
            quantidade++;
        }
        i++;
    }

    i = 1;

    printf("Numeros pares\n");
    while (i<=6)
    {
        printf("%d\n", pares[i]);
        i++;
    }

    printf("Soma dos pares: %d\n", soma);

        i = 1;

    printf("Numeros Impares\n");
    while (i<=6)
    {
        printf("%d\n", impares[i]);
        i++;
    }
    printf("Quantidade de Impares: %d\n", quantidade);

    return 0;
}
