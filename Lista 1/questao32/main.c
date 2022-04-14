//32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, resultado1;
    printf("Digite um Numero\n");
    scanf("%i",&num);
    resultado1 = (num * 3 + 1) + (num * 2 - 1);
    printf("O resultado e: %i\n", resultado1);

    return 0;
}
