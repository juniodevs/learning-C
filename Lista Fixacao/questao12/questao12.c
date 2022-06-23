/*
12. Receba uma string de uma quantidade máxima de caracteres definida pelo usuário, apresente um
menu com as opções abaixo e execute a opção que o usuário escolher:
1 - Colocar toda a string em letras maiúsculas;
2 - Colocar toda a string em letras minúsculas;
3 - Imprimir string;
4 - Trocar string;
5 - Sair
*/


//1. Fa�a um programa que leia um n�mero inteiro e o imprima.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int opcoeseswitch()
{
    int tamanho, i = 0, x = 0, sair = 0;

    printf("Digite o tamanho da String\n");
    scanf("%d", &tamanho);
    char nome[tamanho];
    printf("Digite a sua String\n");
    scanf("%s",nome);

    printf("1 - Colocar toda a string em letras maiusculas;\n");
    printf("2 - Colocar toda a string em letras minusculas;\n");
    printf("3 - Imprimir string;\n");
    printf("4 - Trocar string;\n");
    printf("5 - Sair\n");
    printf("Digite qual opcao voce deseja selecionar\n");
    scanf("%d", &i);

    x = 0;

    switch (i)
    {
    case 1:
        while (nome[x] != '\0')
        {
            putchar(toupper(nome[x]));
            x++;
        }
        printf("\n");
        break;
        case 2:
        while (nome[x] != '\0')
        {
            putchar(tolower(nome[x]));
            x++;
        }
        printf("\n");
        break;
        case 3:
        printf("%s\n", &nome);
        break;

        case 4:
        opcoeseswitch();
        break;

        case 5:
        break;

        default:
        printf("Opcao invalida\n");
        break;
    }
    x = 0;

    printf("Voce deseja sair do programa?\n1-SIM\n2-NAO\n");
    scanf("%d", &sair);
    if(sair == 2)
    {
        opcoeseswitch();
    }
    else if (sair == 1)
    {
        printf("Ate a proxima\n");
        return 0;
    }
    else
    {
        printf("Opcao invalida");
    }

}
int main()
{
    opcoeseswitch();
    
    return 0;
}