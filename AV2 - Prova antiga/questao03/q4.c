/*Implemente uma função que calcule a raiz de uma equação do segundo grau do tipo Ax2 + Bc + C = 0.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes (float A, float B, float C, float * X1, float * X2)
{
    float delta = 0;
    float x1 = 0;
    float x2 = 0;
    
    delta = (B*B) - (4*A*C);
    
    if (delta < 0)
    {
        printf("Nao existe raizes reais\n");
        return 0;
    }
    else if (delta == 0)
    {
        x1 = -B/(2*A);
        printf("Existe uma raiz real\n");
        printf("X1 = %f\n", x1);
        return 1;
    }
    else
    {
        x1 = (-B + sqrt(delta))/(2*A);
        x2 = (-B - sqrt(delta))/(2*A);
        printf("Existem duas raizes reais\n");
        printf("X1 = %f\n", x1);
        printf("X2 = %f\n", x2);
        return 2;
    }
}

int main(){
    float A, B, C, X1, X2;
    printf("Digite o valor de A\n");
    scanf("%f", &A);
    printf("Digite o valor de B\n");
    scanf("%f", &B);
    printf("Digite o valor de C\n");
    scanf("%f", &C);
    raizes(A, B, C, &X1, &X2);
    return 0;
}