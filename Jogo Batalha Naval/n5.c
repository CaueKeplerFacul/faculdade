#include <stdio.h>

int main () {
    int index;

    char * alunos [3][3]= {
        {"Aluno 0", "pt: 30", "Mat: 90"},
        {"Aluno 1", "pt: 60", "Mat: 60"},
        {"Aluno 2", "pt: 90", "Mat: 30"}
    };

    printf("Digite o numero do aluno que queira ver as notas......\n");
    printf("Aluno 0 - digite 0\n");
    printf("Aluno 1 - digite 1\n");
    printf("Aluno 2 - digite 2\n");

    scanf("%d", &index);

    printf("A nota do %s sao %s , %s..\n", alunos[index][0], alunos[index][1], alunos[index][2]);

    return 0;
}