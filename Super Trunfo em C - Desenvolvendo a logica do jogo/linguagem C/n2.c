#include <stdio.h>

int main () {
    float temperatura, umidade;
    unsigned int estoque;
    unsigned int estoqueMinimo=500;
    

    printf("Entre com a temperatura: ");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: ");
    scanf("%f", &umidade);

    printf("Entre com a estoque: ");
    scanf("%u", &estoque);


    if (temperatura > 30){
        printf("Temperatura esta alta\n");
    } else {
        printf("Temperatura esta dentro dos parametors\n"); 
    }

    if (umidade > 50) {
        printf("Umidade está critica\n");
    } else {
        printf("Umdiade esta dentros dos parametors\n");
    }

    if (estoque >= estoqueMinimo) {
        printf("Estoque esta controlado");
    } else {
        printf("Estoque está abaixo do minimo");
    }
}