/*
3. Utilizando o mesmo vetor da questão anterior, determine o menor elemento do vetor e a respectiva
posição dele nesse vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, num[20], num2[20], menor = 1000000, aux = 0;

    printf("Digite os 20 Numeros inteiros positivos\n");
    while (i<20)
    {
        scanf("%d", &num[i]);

        if (num[i] > 0)
        {
            num2[i] = num[i];
            if (menor > num2[i])
            {
                menor = num2[i];
                aux = i;
            }
        }
        else
        {
            printf("Digite o Numero novamente, nao pode ser negativo\n");
            i--;
        }   
        i++;
    }

    printf("O Menor numero e: %d, e sua posicao e %d", menor, aux);
    

    return 0;
}
