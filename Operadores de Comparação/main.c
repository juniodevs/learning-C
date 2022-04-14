#include <stdio.h>
#include <stdlib.h>

/*
> Maior (a Maior que b)
< Menor (a Menor que b)
>= Maior ou igual (a Maior ou Igual a b)
<= menor ou igual (a Menor ou Igual a b)
!= diferente (a diferente de b)
== igual (a igual b)
Operadores de comparação
substitua dentro do "if" ou "else if" para se ter outras operação.
*/

int main()
{
    int a, b;

    printf("Insira o valor de A\n");
    scanf("%d", &a);
    printf("Insira o valor de B\n");
    scanf("%d", &b);

    if(a > b){
        printf("%d e maior que %d", a, b);
    }
    else if (a < b){
        printf("%d e maior que %d", b, a);
    }
    else{
        printf("%d e igual a %d", b, a);
    }


return 0;

}
