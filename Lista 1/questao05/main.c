
//5. Leia um número real e imprima a quinta parte deste número.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1, quintaparte;

    printf("Digite um numero para saber sua quinta parte\n");
    scanf("%f",&N1);
    quintaparte = N1/5;
    printf("A quinta parte de %2.2f e %2.2f",N1,quintaparte);


    return 0;
}
