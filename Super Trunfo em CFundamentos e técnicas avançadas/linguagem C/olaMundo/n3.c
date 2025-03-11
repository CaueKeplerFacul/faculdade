#include <stdio.h>

int main() {
    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf("Soma: %d\n", soma);
    printf("subtracao: %d \n", subtracao);
    printf("multiplicacao: %d \n", multiplicacao);
    printf("divisao: %d \n", divisao);


    return 0;
}