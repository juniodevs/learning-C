#include <stdio.h>
#include <stdlib.h>

dice(int N1)
{
    int dados[N1];
    int somadosdados = 0;

    for (int i = 0; i < N1; i++)
    {
        dados[i] = rand() % 6 + 1;
        somadosdados += dados[i];
    }
    printf("Os dados foram: ");
    for (int i = 0; i < N1; i++)
    {
        printf("%i ", dados[i]);
    }
    printf("\n");
    printf("A soma dos dados foi: %i\n", somadosdados);
}

int main()
{
    int quantidade = 0;

    printf("Digite a quantidade de dados que deseja sortear\n");
    scanf("%d", &quantidade);
    dice(quantidade);

    return 0;
}
