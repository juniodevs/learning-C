#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    struct ficha_aluno //tipo de dado
    {
        char nome[40];
        int numero;
        float nota;
    }; //definição da struct

    struct ficha_aluno aluno;

    printf("\n CADASTRO DE ALUNO \n");

    printf("Nome do aluno ...:");
    fgets(aluno.nome, 40 ,stdin);

    printf("\nDigite o numero do aluno: ");
    scanf("%d", &aluno.numero);

    printf("\nInforme a nota do Aluno: ");
    scanf("%f", &aluno.nota);

    printf("\n\n LENDO DADOS DA STRUCT \n\n");
    printf("Nome: %s", aluno.nome);
    printf("Numero: %d", aluno.numero);
    printf("\nNota: %2.f", aluno.nota);

    return 0;
}
