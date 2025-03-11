#include <stdio.h>

int main () {
    int variavel;

    printf("Digite um valor: ");
    scanf("%d", &variavel);

    switch (variavel) {
    case 1:
        printf("Codigo a ser executado se variavel == 1\n");
    break;
    case 2:
    printf("Codigo a ser xecutado se variavel == 2\n");
    break;
    default:
    printf("Codigo a ser xecutado se variavel nao for 1 nem 2\n");
    
    }

    return 0;
}