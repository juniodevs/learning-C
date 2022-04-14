
//28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, resultado;

    printf("Insira o primeiro numero\n");
    scanf("%f", &n1);
    printf("Insira o segundo numero\n");
    scanf("%f", &n2);
    printf("Insira o terceiro numero\n");
    scanf("%f", &n3);

    resultado = (n1*n1)+(n2*n2)+(n3*n3);

    printf("o resultado e: %.2f", resultado);


    return 0;
}
