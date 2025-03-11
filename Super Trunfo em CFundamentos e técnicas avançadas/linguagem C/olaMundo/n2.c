#include <stdio.h>

int main() {
    int idade;
    int matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n"); // Corrigido com ponto e vírgula
    scanf("%d", &idade);

    printf("Digite sua altura: \n"); // Corrigido com ponto e vírgula
    scanf("%f", &altura);

    printf("Digite seu nome: \n"); // Corrigido com ponto e vírgula
    scanf("%s", &nome);

    printf("Digite sua matricula: \n"); // Corrigido com ponto e vírgula
    scanf("%d", &matricula);


    printf("Seu nome é: %s\n", nome); // Para exibir a idade digitada
    printf("Sua idade é: %d\n", idade); // Para exibir a idade digitada
    printf("Sua matricula é: %d\n", matricula); // Para exibir a idade digitada
    printf("Sua altura é: %f\n", altura); // Para exibir a idade digitada

    printf("Nome do aluno: %s - Matricula: %d - idade %d - altura %f", nome, matricula, idade, altura); // Para exibir a idade digitada

    return 0;
}
