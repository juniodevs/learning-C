#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanhodovetor = 0;
    int primo = 100;
    printf("Digite o tamanho do vetor\n");
    scanf("%i", &tamanhodovetor);
    int vetor[tamanhodovetor];

    for(int i = 0; i < tamanhodovetor; i++)
    {
        vetor[i] = 0;
        if(vetor[i] % primo == 0)
        {
            vetor[i] = primo;
            primo++;
        }
        else
        {
            primo++;
            if(vetor[i] % primo != 0)
            {
            vetor[i] = primo;
            primo++;
            }
        }
    }
    printf("Vetor: ");
    for(int i = 0; i < tamanhodovetor; i++)
    {
        printf("%i ", vetor[i]);
    }

    return 0;
}