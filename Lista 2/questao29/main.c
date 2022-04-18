/*
29. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia
existe naquele mês.

Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não
bissextos.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dia, mes, ano, bissexto = 0;
    printf("Digite o Dia\n");
    scanf("%i",&dia);
    printf("Digite o Mes\n");
    scanf("%i",&mes);
    printf("Digite o Ano\n");
    scanf("%i",&ano);

    if (ano % 4 == 0 && ano % 100 != 0)
    {
        bissexto++;
    }

    if (bissexto==0)
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia <= 31 && mes<=12)
        {
            printf("\n%i/%i/%i esta data e valida este ano nao e bissexto\n", dia, mes, ano);
        }
        else if (dia > 31 || mes > 12)
        {
            printf("\n%i/%i/%i esta data e invalida\n", dia, mes, ano);
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <= 30 && mes<=12)
        {
            printf("\n%i/%i/%i esta data e valida este ano nao e bissexto\n", dia, mes, ano);
        }
        else if (mes == 2 && dia <=28 && mes<=12)
        {
            printf("\n%i/%i/%i esta data e valida este ano nao e bissexto\n", dia, mes, ano);
        }
            else if (mes == 2 && dia > 28)
        {
            printf("\n%i/%i/%i esta data nao e valida\n", dia, mes, ano);
        }
    }

    else if (bissexto==1)
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia <= 31 && mes<=12)
        {
            printf("\n%i/%i/%i esta data e valida este ano e bissexto\n", dia, mes, ano);
        }
        else if (dia > 31 || mes > 12)
        {
            printf("\n%i/%i/%i esta data e invalida\n", dia, mes, ano);
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <= 30 && mes<=12)
        {
            printf("\n%i/%i/%i esta data e valida este ano e bissexto\n", dia, mes, ano);
        }
        else if (mes == 2 && dia <=29 && mes<=12)
        {
            printf("\n%i/%i/%i esta data e valida este ano e bissexto\n", dia, mes, ano);
        }
        else if (mes == 2 && dia > 29)
        {
            printf("\n%i/%i/%i esta data nao e valida\n", dia, mes, ano);
        }
    }
    return 0;
}
