/*
15. Faça uma função que receba um vetor de inteiros, o tamanho dele e um valor inteiro x.
A função deve retornar 1 se x estiver no vetor 
ou 0 se não estiver.
*/
#include <stdio.h>
#include <stdlib.h>


verificacao()
{

    int x = 0, i = 0;
    int esta = 0;

    printf("Digite o tamanho de X\n");
    scanf("%i", &x);

    int vetoriz[x];

    printf("Digite os numeros do vetor\n");
    while (i < x)
    {
        vetoriz[i] = 0;
        scanf("%i", &vetoriz[i]);
        i++;
    }

    i = 0;

    while (i <= x)
    {
        if (vetoriz[i] == x)
        {
            esta++;
        }
        i++;
    }

    if (esta > 0)
    {
        printf("Retornando 1\n");
        return 1;
    }
    else if (esta == 0)
    {
        printf("Retornando 0\n");
        return 0;
    }
    
}
int main()
{
    verificacao();
    return 0;
}