#include <stdio.h>

int main () {
    int opcao;
    float saldo = 1000;

    printf("Escolha uma opção: \n ");
    printf("1 - Verificar saldo \n ");
    printf("2 - Fazer deposito \n ");
    printf("3 - fazer saque \n ");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Seu saldo é de: R$ %f\n", saldo);
    break;
    case 2:
        printf("Digite o banco que voce deseja depositar\n");
    break;
    case 3:
        printf("Seu o valor a sacar: ");
        break;
    default:
        printf("Opção inválida");
    }

    return 0;
}