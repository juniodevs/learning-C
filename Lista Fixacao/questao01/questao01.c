/*
1. Escreva um programa que guarde as notas de uma turma de 20 alunos, calcule a média da turma e
conte quantos alunos obtiveram nota acima desta média calculada. O programa deve exibir a média
da turma e o resultado da contagem
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    float notalauno [20] = {0}, mediaturma = 0;

    printf("Digite a nota dos 20 alunos\n");

    while (i<20)
    {
        printf("%d Aluno: ", i+1);
        scanf("%f", &notalauno[i]);
        mediaturma = notalauno[i] + mediaturma;
        i++;
    }

    i = 0;

    mediaturma = mediaturma/20;

    printf("A media foi %.2f\n", mediaturma);

    while (i<20)
    {
        if (notalauno [i] >= mediaturma)
        {
            printf("Aluno %d, tirou %.2f, nota acima da media\n", i+1, notalauno [i]);
        }
        i++;
    }
    return 0;
}
