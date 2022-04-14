//31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, resultado;
    printf("Digite o numero\n");
    scanf("%i", &num);
    resultado = num + 1;
    printf("Sucessor: %i\n", resultado);
    resultado = num - 1;
    printf("Antecessor: %i\n", resultado);
    return 0;
}
