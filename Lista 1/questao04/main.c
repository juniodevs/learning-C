
//4. Leia um número real e imprima o resultado do quadrado desse número.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1, quadrado;

    printf("Digite seu numero\n");
    scanf("%f",&N1);
    quadrado = N1*N1;
    printf("O quadrado e %2.3f\n", quadrado);


    return 0;
}
