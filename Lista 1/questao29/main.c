
//29. Leia quatro notas, calcule a média aritmética e imprima o resultado

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, resultado;

    printf("Insira a primeira nota\n");
    scanf("%f", &n1);
    printf("Insira a segunda nota\n");
    scanf("%f", &n2);
    printf("Insira a terceira nota\n");
    scanf("%f", &n3);
    printf("Insira a quarta nota\n");
    scanf("%f", &n4);
    resultado = (n1+n2+n3+n4)/4;
    printf("a media e: %.2f", resultado);
    return 0;

    }
