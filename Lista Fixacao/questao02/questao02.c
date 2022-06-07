/*
2. Preencha um vetor de inteiros positivos Q dados pelo usuário com 20 posições (aceitar somente
inteiros positivos). Identifique a seguir qual o maior elemento de Q e a respectiva posição que ele
ocupa no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, num[20], num2[20], maior = 0, aux = 0;

    printf("Digite os 20 Numeros inteiros positivos\n");

    while (i<20)
    {
        scanf("%d", &num[i]);

        if (num[i] > 0)
        {
            num2[i] = num[i];
            if (maior < num2[i])
            {
                maior = num2[i];
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

    printf("O Maior numero e: %d, e sua posicao e %d", maior, aux);
    

    return 0;
}
