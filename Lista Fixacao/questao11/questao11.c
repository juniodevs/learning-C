/*
11. Receba uma palavra do usuário e informe se a palavra é um palíndromo. Um palíndromo é lido da
mesma forma seja da esquerda para a direita ou da direita para a esquerda. Ex.: O nome do pokémon
Girafarig é um palíndromo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 0, x = 0;
    char palavra[20], polidromo[20];

    printf("Digite um Polidromo\n");
    scanf("%s", palavra);

    strcpy(polidromo, palavra);

    while (i!='\0')
    {
        if (palavra[i] == polidromo[i])
        {
            x++;
        }
        else
        {
            x = 0;
            break;
        }
        i++;
    }

    if (x!=0)
    {
        printf("A Palavra eh um polidromo");
    }
    else
    {
        printf("A Palavra nao eh um polidromo");
    }
    

    return 0;
}