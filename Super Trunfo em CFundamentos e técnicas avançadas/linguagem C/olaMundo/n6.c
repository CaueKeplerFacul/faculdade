#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    float quociente = (float) a / b;

    printf("Soma: %d\n", soma);
    printf("Diferença: %d \n", diferenca);
    printf("Produto: %d \n", produto);
    printf("Quociente: %.2f \n", quociente);

    return 0;
}