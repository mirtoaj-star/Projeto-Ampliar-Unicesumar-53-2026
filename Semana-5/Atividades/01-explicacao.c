#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Aluno {
        char nome[30];
        int idade;
        int matricula;
        char materias[2][30];
    };

int main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    system("clear");

    struct Aluno aluno1;

    printf("Informe o nome do aluno: ");
    fgets(aluno1.nome, sizeof(aluno1.nome), stdin);
    aluno1.nome[strcspn(aluno1.nome, "\n")] = '\0';

    printf("Informe a idade do aluno: ");
    scanf("%d", &aluno1.idade);

    printf("Informe a matrícula do aluno: ");
    scanf("%d", &aluno1.matricula);
    getchar();

    for(int i = 0; i < 2; i++) {
        printf("Informe a %d° matéria: ", i + 1);
        fgets(aluno1.materias[i], sizeof(aluno1.materias[i]), stdin);
        aluno1.materias[i][strcspn(aluno1.materias[i], "\n")] = '\0';
    }

    printf(
        "\n\n::: ALUNO 1 :::\n"
        "Nome: %s\n"
        "Idade: %d\n"
        "Matricula: %d\n"
        "Matéria 1: %s\n"
        "Matéria 2: %s", aluno1.nome, aluno1.idade, aluno1.matricula, aluno1.materias[0], aluno1.materias[1]
    );

    return 0;
}