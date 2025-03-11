#include <stdio.h>

int main() {
    unsigned long int numeroSinal = 3000000000;
    unsigned int numeroSemSinal = 3000000000;
    long int numeroNormal = 3000000000;
    int numeroGrande = 3000000000;

    printf("Numero com Sinal: %lu\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal);

    printf("Numero Regular int: %ld\n", numeroNormal);
    printf("Numero grande long int: %d\n", numeroGrande); //no github funcionaria

    return 0;

}