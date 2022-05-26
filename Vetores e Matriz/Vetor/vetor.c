#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[5] = {0}, total = 0, media = 0;
    int i = 1;

    printf("Digite 5 valores\n");

    while (i<=5)
    {
        scanf("%f", &notas[i]);
        i++;
    }

    i = 1;

    while (i<=5)
    {
        total += notas[i];
        i++;
    }

    media = total / 5;

    printf("A media do aluno e %.2f", media);
 return 0;
}
