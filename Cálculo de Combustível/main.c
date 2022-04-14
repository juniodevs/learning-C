#include <stdio.h>
#include <stdlib.h>
int calculo(float vGas, float vEta);


int main()
{
    float precogasolina, precoetanol;

    printf("####CarPrice####\n\n");
    printf("Qual o preco da Gasolina\n");
    scanf("%f", &precogasolina);

    printf("Qual o preco do Etanol\n");
    scanf("%f", &precoetanol);

    int resultado = calculo(precogasolina, precoetanol);

    if (resultado == 0){
        printf("Compensa abastecer com Gasolina\n.");
    }
    else if (resultado==1){

        printf("Compensa abastecer com Etanol\n.");
    }
    else
    {
        printf("Os valores são equivalentes");
    }

    system("pause");

    return 0;
}

int calculo(float vGas, float vEta)
{
    //Preco Gasolina * 0.7 = Preco Maximo do Alcool

    if(vGas * 0.70 < vEta){

    //Compensa mais com a Gasolina
    return 0;

    }
    else if (vGas * 0.70 > vEta) {

    //Compensa mais com o Etanol

    return 1;
    }
    else{

        //Valores Equivalentes
    }
        return 0;
}


