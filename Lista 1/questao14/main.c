/*14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é: R = G
* PI /180, sendo G o angulo em graus e R em radianos e PI = 3.14.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double pi = 3.14;
    float graus, radiano;

    printf("Digite um angulo em graus\n");
    scanf("%f",&graus);
    radiano = graus * pi / 180;
    printf("Em Graus e: %.4f \nEm radiano e: %.4f\n", graus, radiano);
    return 0;
}
