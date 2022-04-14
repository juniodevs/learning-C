#include <stdio.h>
#include <stdlib.h>

int main()

//FUNÇÃO
{

    int valor1, valor2, resultado;
    printf("Digite o valor de 1: \n");
    scanf("%d", &valor1);
    printf("Digite o valor de 2: \n");
    scanf("%d", &valor2);

    resultado = multiplicacao(valor1, valor2);

    printf("O resultado e: %d\n",resultado);

    return 0;
}

int multiplicacao(int num1, int num2){
  int resultado;
  resultado = num1 * num2;
  return(resultado);
}
