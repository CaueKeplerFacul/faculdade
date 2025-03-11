#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(0));
    int opcao;
    int computador;

    printf("Jogo do Jokenpo\n");
    printf("1. PEDRA\n");
    printf("2. PAPEL\n");
    printf("3. TESOURA\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    computador = rand() % 3 + 1;

    switch (opcao)
    {
    case 1:
        printf("Jogador: Pedra\n");
        break;
    case 2:
        printf("Jogador: Papel\n");
        break;
    case 3:
        printf("Jogador: Tesoura\n");
        break;
    
    default:
    printf("Opção inválida\n");
        break;
    }

    switch (computador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if (computador == opcao) {
        printf("Jogo empatou!");
    } else if ((opcao == 1) && (computador == 3) || (opcao == 2) && (computador == 1) || (opcao == 3) && (computador == 2)) {
        printf("Voce ganhou, parabens!");
    } else {
        printf("Voce perdeu, boa sorte na proxima vez!");
    }



    return 0;
}