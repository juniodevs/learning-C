
/*34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área
do círculo é pi * raio2, considere = 3.14.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{   const double pi = 3.14;
    float raio, resultado;
    printf("Digite o Raio do Circulo\n");
    scanf("%f",&raio);
    resultado = pi * (raio * raio);
    printf("A area do circulo e: %.3f", resultado);
    return 0;
}
