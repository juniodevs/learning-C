#include <stdio.h>
#include <stdlib.h>

verificarnumeroprimos(int numero){
    int primo = 0;
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            primo++;
        }
    }
    if (primo == 2)
    {
        return printf("%d", numero);
    }
    else
    {
    }
}

int main()
{
    int tamanhodovetor = 0;
    scanf("%d", &tamanhodovetor);
    int vetor[tamanhodovetor];
    for (int i = 0; i < tamanhodovetor; i++)
    {
        vetor[i] = 0;
        verificarnumeroprimos(i);

        if (vetor[i] > 0)
        {
            printf("%d ", vetor[i]);
        }
        else 
        {
            i--;
        }

    }
    return 0;
}