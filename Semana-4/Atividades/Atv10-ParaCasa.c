/*
    Escreva um algortimo em C que receba:

    Matrícula do Aluno:
    Idade do Aluno:
    Nome do Aluno:
    Endereço do Aluno:

    O programa deverá escrever na tela a ficha completa do aluno, incluindo nome, idade, matricula e endereço.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL,"pt-BR.UTF-8");
    system("clear");

    int matricula, idade;
    char nome[20], endereco[100];

    printf("Informe a matricula do aluno: ");
    scanf("%d", &matricula);

    printf("Informe a idade do aluno: ");
    scanf("%d", &idade);
    getchar();

    printf("Informe o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Informe o endereço do aluno: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    printf(
        "::: ALUNO :::\n"
        "Matricula: %d\n"
        "Nome: %s\n"
        "Idade: %d\n"
        "Endereço: %s", matricula, nome, idade, endereco
    );

    return 0;
}