
/*35. Sejam a e b os catetos de um triângulo retângulo,
faça um programa que receba os valores de a e b e calcule o
valor da hipotenusa. Imprima o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, hipotenusa;

    printf("Insira o primeiro valor\n");
    scanf("%f", &a);

    printf("Insira o segundo valor\n");
    scanf("%f", &b);

    hipotenusa = sqrt( (a * a) + (b * b) );
    printf("A hipotenusa e = %.2f\n", hipotenusa);
    return 0;
}
