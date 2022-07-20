#include <stdio.h>
#include <stdlib.h>

struct data{
    int dia;
    int mes;
    int ano;
};

struct produto{
    char nome[50];
    struct data validade;
};

salvar(struct produto produto){
    FILE *arquivo;
    arquivo = fopen("produtos.txt", "a");
    fprintf(arquivo, "%s - %i/%i/%i\n", produto.nome, produto.validade.dia, produto.validade.mes, produto.validade.ano);
    fclose(arquivo);
}

receberprodutos(){
    struct produto produto;
    printf("Digite o nome do produto\n");
    scanf("%s", produto.nome);
    printf("Digite o dia de validade\n");
    scanf("%i", &produto.validade.dia);
    printf("Digite o mes de validade\n");
    scanf("%i", &produto.validade.mes);
    printf("Digite o ano de validade\n");
    scanf("%i", &produto.validade.ano);
    salvar(produto);
}

int main()
{
    int tamanhodovetor = 0;
    printf("Digite o tamanho do vetor\n");
    scanf("%i", &tamanhodovetor);
    struct produto vetor[tamanhodovetor];
    for(int i = 0; i < tamanhodovetor; i++)
    {
        receberprodutos();
    }
    return 0;
}