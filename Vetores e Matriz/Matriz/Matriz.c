#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3] [3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};
    int matriz2 [5] [5]={{1, 2, 3, 4, 5},
                         {6, 7, 8, 9, 10},
                         {11, 12, 13, 14, 15},
                         {15, 16, 17, 18, 19, 20},
                         {21, 22, 23, 24, 25}};
    int linha = 0, coluna = 0;

    printf("%d\n \n \n", matriz[0] [0]);

    while (linha<5)
    {
        while(coluna<5)
        {
            printf("%d ", matriz2[linha] [coluna]);
            coluna++;
        }
        printf("\n");
        linha++;
        coluna = 0;
    }
    

    return 0;
}