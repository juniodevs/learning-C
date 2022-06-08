/*
7. Considere que a temperatura média em Crateús a cada dia é um número aleatório entre 22 e 40 graus
Celsius. Faça um algoritmo que preencha um vetor com a temperatura de cada dia de um mês com 31
dias (valores aleatórios) e informe:
a) o dia do mês que teve a menor temperatura e qual foi essa temperatura;
b) o dia do mês que teve a maior temperatura e qual foi essa temperatura;
c) a temperatura média do mês;
d) quantos dias a temperatura ficou acima da média
e) quantos dias a temperatura ficou abaixo da média
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temperaturas[31], i = 0, media = 0, maior = 0, menor = 50, diasacima = 0, diasabaixo = 0;
    int diadamaior = 0, diadamenor = 0;
    srand(time(NULL));

    while (i<31)
    {
        temperaturas[i] = 22+(rand()%18);
        if (menor > temperaturas[i])
        {
            menor = temperaturas[i];
        }
        if (maior < temperaturas[i])
        {
            maior = temperaturas[i];
        }

        media = media + temperaturas[i];
        i++;
    }

    media = media/31;
    i = 0;
    while (i<31)
    {
       if (media > temperaturas[i])
       {
           diasabaixo++;
           diadamenor = i;
       }
    if (media < temperaturas[i])
       {
           diasacima++;
           diadamaior = i;
       }
       i++;
    }

    printf("%d Este dia teve a menor temperatura de %d \n",diadamenor , menor);
    printf("%d Este dia teve a maior temperatura de %d \n",diadamaior ,maior);
    printf("%d Esta foi a Media\n", media);
    printf("%d Dias tiveram a media acima da media\n", diasacima);
    printf("%d Dias tiveram a media abaixo da media\n", diasabaixo);
    return 0;
}