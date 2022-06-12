#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int tamanhodeA, tamanhodeB, tamanhodeC, elementosiguais = 0, temelementosiguais = 0;
    int i, j, *A, *B, *C, x = 0;

    printf("Digite o Tamanho de A e B\n");
    
    scanf("%d %d", &tamanhodeA, &tamanhodeB);

    A = (int *)(malloc(tamanhodeA * sizeof(int)));
    B = (int *)(malloc(tamanhodeB * sizeof(int)));

    for (i=0; i<tamanhodeA; i++)
    {
        A[i] = rand() % 100;
    }
    for (i=0; i<tamanhodeB; i++)
    {
        B[i] = rand() % 100;
        for (j=0; j<tamanhodeA; j++)
        {
            if (B[i]==A[j]){
                elementosiguais++;
            }
        }
    }
    tamanhodeC = (tamanhodeA + tamanhodeB)- (2 * elementosiguais);

    C = (int *)(malloc(tamanhodeC * sizeof(int)));

    for (i=0; i<tamanhodeA; i++){
        temelementosiguais = 0;
        for(j=0; j<tamanhodeB; j++){
            if (A[i]==B[j]){
                temelementosiguais = 1;

            }
            if (j==tamanhodeB-1){
                if(temelementosiguais == 0){
                    C[x] = A[i];
                    x++;
                }
            }
        }
    }

     for (i=0; i<tamanhodeB; i++){
        temelementosiguais = 0;
        for(j=0; j<tamanhodeA; j++){
            if (B[i]==A[j]){
                temelementosiguais = 1;
            }
            if (j==tamanhodeB-1){
                if(temelementosiguais == 0){
                    C[x] = B[i];
                    x++;
                }
            }
        }
    }
    printf("A[%d]: \n", tamanhodeA);
    for (i=0; i<tamanhodeA; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("B[%d]: \n", tamanhodeB);
    for (i=0; i<tamanhodeB; i++){
        printf("%d ", B[i]);
    }
    printf("\n");
    printf("C[%d]: \n", tamanhodeC);
    for (i=0; i<tamanhodeC; i++){
        printf("%d ", C[i]);
    }
    return 0;
}