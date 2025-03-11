#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(0));
    int opcao, computador, resultado;
    char tipoComparacao;

    printf("Jogo do Maior/Menor\n");
    printf("M - Maior\n");
    printf("N - Menor\n");
    printf("T - Igual\n");
    printf("Escolha uma opção: \n");
    scanf("%c", &tipoComparacao);

    printf("Escolha seu Numero entre 1 e 100: \n");
    scanf("%d", &opcao);

    computador = rand() % 100 + 1;

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Voce escolheu a opção Maior\n");
        resultado = opcao > computador ? 1 : 0;
        printf("O numero do computador é: %d e do jogador %d\n", computador, opcao);
        break;

    case 'N':
    case 'n':
        printf("Voce escolheu a opção Menor\n");
        resultado = opcao < computador ? 1 : 0;
        printf("O numero do computador é: %d e do jogador %d\n", computador, opcao);
        break;

    case 'T':
    case 't':
        printf("Voce escolheu a opção Igual\n");
        resultado = opcao == computador ? 1 : 0;
        printf("O numero do computador é: %d e do jogador %d\n", computador, opcao);
        break;
    
    default:
    printf("Opção inválida\n");
        break;
    }


    if (resultado == 1) {
        printf("Voce Venceu");
    } else {
        printf("Voce Perdeu");
    } 

    return 0;
}