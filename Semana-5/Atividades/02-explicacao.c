#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct {
    char nome[30];
    int idade;
    float altura;
    float peso;
} TipoPessoa;

typedef struct {
    TipoPessoa pessoa;
    int matricula;
    float notas[2];
} Aluno;


int main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    system("clear");

    Aluno aluno1 = {
        .pessoa.nome = "Alex Gonçalves",
        .pessoa.idade = 17,
        .pessoa.altura = 1.75,
        .pessoa.peso = 72,
        .notas[0] = 10,
        .notas[1] = 9.6,
        .matricula = 123
    };

    printf(
        "::: Aluno :::\n"
        "Nome: %s\n"
        "Idade: %d\n"
        "Altura: %.2f\n"
        "Peso: %.1fKg\n"
        "Matrícula: %d\n"
        "Notas:\n- %.2f\n- %.2f\n\n", aluno1.pessoa.nome, aluno1.pessoa.idade, aluno1.pessoa.altura, aluno1.pessoa.peso, aluno1.matricula, aluno1.notas[0], aluno1.notas[1]
    );

    return 0;
}