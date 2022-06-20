#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct cartas {
    int numero; 
    char naipes[10];
}baralhos[52];

struct jogador {
    char usuario[10];
    int potuacao;
}jogador;

int main (){
    
    jogador.potuacao = 0;
    srand(time(NULL));
    int i, j, k = 0, numerodecartas, cartaAleatoria, confirmacaodacarta = 0, mascaradobaralho[52], somas = 0, partidas = 0, resumir = 0, cartada = 0;

    for(i=0; i<52; i++){
        mascaradobaralho[i] = 0;
    }

    for (i=0; i<4; i++){
        for(j=0; j<13; j++){
            if (i==0){
                strcpy (baralhos[k].naipes, "Copas");
            }
            if (i==1){
                strcpy (baralhos[k].naipes, "Ouros");
            }
            if (i==2){
                strcpy (baralhos[k].naipes, "Espadas");
            }
            if (i==3){
                strcpy (baralhos[k].naipes, "Paus");
            }

            baralhos[k].numero = j + 1;
            k++;
        }
    }

    printf("Digite o nome do usuario: ");
    gets(jogador.usuario);

    while (cartada == 0){
        somas = 0;
        partidas = 0;
        while(partidas == 0){
                confirmacaodacarta = 0;
                
                while(confirmacaodacarta == 0){
                    cartaAleatoria = rand() % 52;

                    if (mascaradobaralho[cartaAleatoria]==0){
                        confirmacaodacarta = 1;
                        mascaradobaralho[cartaAleatoria] = 1;
                        somas += baralhos[cartaAleatoria].numero;
                        }
                    }    
                printf("%s \n", baralhos[cartaAleatoria].naipes);
                printf("%d \n \n", baralhos[cartaAleatoria].numero);
                printf("Você tem: %d \n", somas);

                printf("\n");

                if (somas>21){
                    printf("Voce perdeu, pois passou de 21\n");
                    partidas = 1;
                    break;
                }

                printf("deseja resumir? 0 para continuar jogando e 1 para desistir \n");
                scanf("%d", &resumir);

                if (resumir == 1){
                    partidas = 1;
                    printf("Voce ganhou %d potuacao\n", somas);
                    jogador.potuacao += somas;
                }        
        }
        printf("deseja continuar a jogar? 0 para resumir e 1 para terminar de jogar \n");
        scanf("%d", &resumir);

        if (resumir == 1){
            cartada = 1;
            printf("pontuacao final: %d", jogador.potuacao);
    }
}
return 0;
}