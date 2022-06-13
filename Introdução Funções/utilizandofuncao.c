#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float x = 0, y = 0;

    printf("Digite X e Y\n");
    scanf("%f %f", &x, &y);

    float calcularAreaRetangulo (float x, float y);
    float area = calcularAreaRetangulo(x, y);
    printf("A area eh: %f", area);

    return 0;
}

float calcularAreaRetangulo (float base, float altura){

    float area = base * altura;

    return area;
}
