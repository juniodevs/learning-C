#include <stdio.h>
#include <stdlib.h>

dice(int N1)
{
    int dados[N1];

    for (int i = 0; i < N1; i++)
    {
        dados[i] = rand() % 6 + 1;
    }
    printf("Os dados impares: ");
    for (int i = 0; i < N1; i++)
    {
        if (dados[i] % 2 != 0)
        {
            printf("%i ", dados[i]);
        }
    }
    printf("\n");
}

int main()
{
    int quantidade = 0;

    printf("Digite a quantidade de dados que deseja sortear\n");
    scanf("%d", &quantidade);
    dice(quantidade);

    return 0;
}
