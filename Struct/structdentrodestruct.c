#include <stdio.h>
#include <stdlib.h>

struct tp_endereco
{
    char rua[40];
    int numero;
    char bairro[40];
    char cidade [40];
    char estado[3];
    int cep;
};

struct tp_data_de_nascimento
{
    int dia;
    int mes;
    int ano;
};

struct cadastrodocliente
{
    char nome_cliente[40];
    int telefone;

    struct tp_endereco endereco;
    struct tp_data_de_nascimento data_nascimento;
    
    
}cad_cliente[2];


int main()
{
    int i;

    printf("\n\n-----Cadastro dos clientes-----\n\n");

    //Armazenar os dados do cadastro dentro da struct cad_cliente
    for (i = 0; i < 2; i++)
    {
        printf("\n\nNome do cliente.............: ");
        fflush(stdin);
        gets(cad_cliente[i].nome_cliente);

        printf("\n\nDigite o telefone do cliente: ");
        scanf("%d",&cad_cliente[i].telefone);

        printf("\nDigite a rua..................: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.rua);

        printf("\nDigite o numero................:");
        scanf("%d", &cad_cliente[i].endereco.numero);

        printf("\nDigite o Bairro...............: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.bairro);

        printf("\nDigite a Cidade...............: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.cidade);

        printf("\nDigite o estado...............: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.estado);

        printf("\nDigite o CEP..................:");
        scanf("%d", &cad_cliente[i].endereco.cep);

        printf("\nDia de Nascimento..............:");
        scanf("%d", &cad_cliente[i].data_nascimento.dia);

        printf("\nMes de Nascimento..............:");
        scanf("%d", &cad_cliente[i].data_nascimento.mes);

        printf("\nAno de Nascimento..............:");
        scanf("%d", &cad_cliente[i].data_nascimento.ano);

    } // fim de coleta

    for (i = 0; i < 2; i++)
    {
        printf("\n\n%d Cadastro\n\n");
        printf("\nNome.......: %s", cad_cliente[i].nome_cliente);
        printf("\nRua.......: %s", cad_cliente[i].endereco.rua);
        printf("\nNumero.......: %d", cad_cliente[i].endereco.numero);
        printf("\nBairro.......: %s", cad_cliente[i].endereco.bairro);
        printf("\nRua.......: %s", cad_cliente[i].endereco.rua);
        printf("\nCidade.......: %s", cad_cliente[i].endereco.cidade);
        printf("\nEstado.......: %s", cad_cliente[i].endereco.estado);
        printf("\nCEP.......: %d", cad_cliente[i].endereco.cep);

        printf("\ndia de nasc: %d", cad_cliente[i].data_nascimento.dia);
        printf("\nmes de nasc: %d", cad_cliente[i].data_nascimento.mes);
        printf("\nano de nasc: %d", cad_cliente[i].data_nascimento.ano);
    }
    return 0;
}
