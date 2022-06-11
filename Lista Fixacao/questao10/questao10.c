/*
10. Armazene o primeiro nome de uma pessoa em um vetor de 20 posições, conte e informe quantas letras
o nome dela tem. Obs.: lembre-se que uma string termina sempre com um caractere nulo ’\0’ .
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade = 0;
    char nomepessoa[20];

    printf("Digite seu nome\n");
    scanf("%s", &nomepessoa);

    for ( int i = 0; i < 20; i++)
    {
        if (nomepessoa[i] == '\0')
        {
            break;
        }
        else
        {
            quantidade++;
        }  
    }

    printf("%s tem %d letras", nomepessoa, quantidade);
    return 0;
}