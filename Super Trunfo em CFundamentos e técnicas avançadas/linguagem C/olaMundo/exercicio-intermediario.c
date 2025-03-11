#include <stdio.h>

int main() {

    int nota1, nota2, nota3;
    float media;

    printf("Digite sua primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite sua segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite sua terceira nota: \n");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3; // desse jeito ele força que somente a media seja float, os numeros so aceitam inteiros, as notas nesse cado, mas a media sai como float

    printf("A media e: %.2f", media);

    return 0;

}