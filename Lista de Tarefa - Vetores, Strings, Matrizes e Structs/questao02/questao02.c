/* Um grupo de crianças brinca de piratas e troca mensagens "secretas" entre si invertendo o texto, ou
seja, escrevendo de trás para frente. Faça um programa que pegue do usuário uma mensagem e
imprima na tela sua forma "secreta". Ex.: "FUTEBOL HOJE MAIS TARDE" se transformaria em
"EDRAT SIAM EJOH LOBETUF". */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  void inverter(char vet[]){
    int i, auxiliar, final, tamanho = strlen(vet);

    final = tamanho - 1;
    for(i = 0; i < tamanho/2; i++){
        auxiliar = vet[i];
        vet[i] = vet[final];
        vet[final] = auxiliar;
        final--;
  }
}
    char palavra[50];
    printf("Digite a frase: ");
    scanf("%s", &palavra);

    printf("%s\n", palavra);

    inverter(palavra);
    printf("%s", palavra);

    return 0;
}