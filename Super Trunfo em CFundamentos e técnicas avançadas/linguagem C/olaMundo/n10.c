#include <stdio.h>

int main() {
    float num1 = 10.2;
    int num2 = 10;

    printf("Numero1 > numero2: %d\n", (int)num1 > num2); //assim faz com que transforme o float para int, considerando so a parte da frente
    printf("Numero1 == numero2: %d\n", (int)num1 == num2);

    return 0;

}