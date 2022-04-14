

//3. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1, N2, N3, resultado;

    printf("Digite o primeiro numero\n");
    scanf("%i",&N1);
    printf("Digite o segundo numero\n");
    scanf("%i",&N3);
    printf("Digite o terceiro numero\n");
    scanf("%i",&N2);
    resultado = N1 + N2 + N3;
    printf("Seu resultado e %d", resultado);



    return 0;
}
