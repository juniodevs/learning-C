/* "Tiro no Escuro" é um jogo bem simples. Três jogadores são vendados e para cada um deles é
colocado um alvo em uma posição aleatória de um tabuleiro quadrado com 5 por 5 espaços. Então,
cada jogador dá uma quantidade palpites de onde está seu alvo até acertá-lo. Cada palpite dado sem
alvos diminui a pontuação do jogador em 1 ponto, enquanto que acertar o seu alvo aumenta em 5
pontos, e acertar o alvo de um outro jogador aumenta em 10 pontos. Ganha o jogador que fizer mais
pontos. Faça um programa que simule este jogo e indique qual o jogador vencedor. Utilize pelo menos
uma struct com os dados dos jogadores e uma matriz para o tabuleiro.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int board[5][5] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};



struct player {
    char nomeouapelido[10];
    int idade;
    int numVitorias;
}players[3];


void mostrarBoard(){
    printf("  %d | %d | %d | %d | %d", board[0][0], board[0][1], board[0][2], board[0][3], board[0][4]);
    printf(" \n ------------------- \n");
    printf("  %d | %d | %d | %d | %d", board[1][0], board[1][1], board[1][2], board[1][3], board[1][4]);
    printf(" \n ------------------- \n");
    printf("  %d | %d | %d | %d | %d", board[2][0], board[2][1], board[2][2], board[2][3], board[2][4]);
    printf("\n ------------------- \n");
    printf("  %d | %d | %d | %d | %d", board[3][0], board[3][1], board[3][2], board[3][3], board[3][4]);
    printf("\n ------------------- \n");
    printf("  %d | %d | %d | %d | %d", board[4][0], board[4][1], board[4][2], board[4][3], board[4][4]);
    printf("\n \n");
}

void resetarotabuleiro(){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            board[i][j] = 0;
        }
    }
}

int main()
{
    int linhadotabuleiro, colunadotabuleiro, newgame = 0, valorJogada = 1, partida = 0, colunopalpite[3], linhapalpite[3], pts[3] = {0, 0, 0}, i;
    srand(time(NULL));
    printf("Digite o nome ou apelido dos jogadores: \n");
    scanf("%s %s %s", &players[0].nomeouapelido, &players[1].nomeouapelido, &players[2].nomeouapelido);
    printf("Digite a idade dos jogadores: \n");
    scanf("%d %d %d", &players[0].idade, &players[1].idade, &players[2].idade);
    while (partida == 0){
    resetarotabuleiro();
    newgame = 0;
    valorJogada = 1;
    while (newgame<3){
            linhadotabuleiro = rand()%5;
            colunadotabuleiro = rand()%5;
        if (board[linhadotabuleiro][colunadotabuleiro] == 0){
            board[linhadotabuleiro][colunadotabuleiro] = valorJogada;
            newgame++;
            valorJogada++;
        }
    }        
        for (i=0; i<3; i++){
            printf("Palpite do %s:", players[i].nomeouapelido);
            scanf("%d %d", &linhapalpite[i], &colunopalpite[i]);

            if (board[linhapalpite[i]][colunopalpite[i]]==0){
                if (pts[i] != 0){
                    pts[i] -= 1;
                }
            }
            if (i==0){
                if (board[linhapalpite[i]][colunopalpite[i]]==1){
                    pts[i] += 5;
                }
                if (board[linhapalpite[i]][colunopalpite[i]]!=1 && board[linhapalpite[i]][colunopalpite[i]]!=0){
                    pts[i] += 10;
                }
            }
            if (i==1) {
                if (board[linhapalpite[i]][colunopalpite[i]]==2){
                    pts[i] += 5;
                }
                if (board[linhapalpite[i]][colunopalpite[i]]!=2 && board[linhapalpite[i]][colunopalpite[i]]!=0){
                    pts[i] += 10;
                }
            }
            if (i==2){
                if (board[linhapalpite[i]][colunopalpite[i]]==3){
                    pts[i] += 5;
                }
                if (board[linhapalpite[i]][colunopalpite[i]]!=3 && board[linhapalpite[i]][colunopalpite[i]]!=0){
                    pts[i] += 10;
                }
            }

        }
        mostrarBoard();
        i = 0;
        while (i<3){
            printf("%s: %d \n", players[i].nomeouapelido, pts[i]);
            i++;
        }
        if (pts[0]>=20 || pts[1]>=20 || pts[2]>=20){
            partida = 1;
        }
    }
   return 0;
}