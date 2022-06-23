/*
14. Receba uma string de até 150 caracteres e conte quantas palavras o texto tem.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contagem = 1, i = 0;
    char texto[150];

    printf("Digite seu texto\n");
    gets(texto);

    while (texto[i] != '\0')
    {
        if (texto[i] == ' ')
        {
            contagem++;
        }
        i++;
    }

    printf("Seu texto tem %d palavras", contagem);
    return 0;
}
