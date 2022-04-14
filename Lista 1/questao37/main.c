
/* 37. Leia o salário de um funcionário.
Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novosalario;
    printf("Digite o Salario atual do funcionario\n");
    scanf("%f", &salario);
    novosalario = salario * 1.25;
    printf("O novo salario e: %.2f\n", novosalario);
    return 0;
}
