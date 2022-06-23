/*
13. Receba uma string com até 50 caracteres e conte quantas vogais e quantas consoantes ela tem
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vogais = 0, consoantes = 0, i = 0;
    char palavra[100];
    printf("Digite sua palavra\n");
    scanf("%s", palavra);

    while (palavra[i] != '\0')
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            vogais++;
        }
        else
        {
            consoantes++;
        }
        i++;
    }
    printf("A palavra tem %d vogais\n", vogais);
    printf("A palavra tem %d consoantes\n", consoantes);
    return 0;
}