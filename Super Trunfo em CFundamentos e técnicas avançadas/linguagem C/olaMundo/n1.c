#include <stdio.h>

int main() {
    int idade;
    int quantidade;
    float altura;
    char letra;

    printf("Digite sua idade: "); // Corrigido com ponto e vírgula
    scanf("%d", &idade);

    printf("Sua idade é: %d\n", idade); // Para exibir a idade digitada

    return 0;
}
