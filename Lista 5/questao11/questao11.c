/*
Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva o número de
alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2, e o número
de alunos cuja pior nota foi na prova 3.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas [10] [3], i = 0, x = 0, prova [2] = {0};

while (i<5)
{
    printf("Digite as 3 notas do aluno %d\n", i);
    while (x<3)
    {
        printf("Nota %d: ", x);
        scanf("%d", &notas[i][x]);
        x++;
    }
    i++;
    x = 0;
}

i = 0;
x = 0;
while (i<5)
{
    while (x<3)
    {
        if(notas[0][x] < notas[1][x] && notas[0][x] < notas[2][x])
        {
            prova[0]++;
        }
        else if ((notas[1][x] < notas[2][x] && notas[1][x] < notas[0][x]))
        {
            prova[1]++;
        }
        else if ((notas[2][x] < notas[1][x] && notas[2][x] < notas[0][x]))
        {
            prova[2]++;
        }
        x++;
    }
    i++;
    x = 0;
}

printf("%d Pessoas foram pior na prova 1\n", prova[0]);
printf("%d Pessoas foram pior na prova 2\n", prova[1]);
printf("%d Pessoas foram pior na prova 3\n", prova[2]);
    return 0;
}