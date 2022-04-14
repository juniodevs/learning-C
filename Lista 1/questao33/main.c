//33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado, area;
    printf("Digite o lado do quadrado\n");
    scanf("%i",&lado);
    area = lado * lado;
    printf("A area do seu quadrado e: %i\n", area);

    return 0;
}
