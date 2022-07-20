#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%i", &t);
    int A[t][t], i, j;
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t; j++)
        {
            A[i][j] = rand() % 100;
        }
    }
    int c = 0, d = 0;
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t; j++)
        {
            if (A[i][j] == t)
            {
                c++;
            }
        }
    }
    printf("%i\n", c);
    return 0;
}