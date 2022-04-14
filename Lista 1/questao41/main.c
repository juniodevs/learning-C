/*41. Receba o salário-base de um funcionário.
Calcule e imprima o salário a receber, sabendo-se que esse
funcionário tem uma gratificação de 5% sobre o salário-base.
Além disso, ele paga 7% de imposto sobre o salário-base.
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariobase, gratificacao, retificacao;

    printf("Digite seu Salario Base\n");
    scanf("%f",&salariobase);
    gratificacao = salariobase * 0.05;
    retificacao = salariobase * 0.07;
    salariobase = (salariobase + gratificacao) - retificacao;
    printf("Seu Salario Base e:R$%.2f\n", salariobase);

    return 0;
}
