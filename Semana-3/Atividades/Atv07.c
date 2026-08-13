/*
    Desenvolva um programa que receba notas de alunos.
    Caso o usuário informe uma nota menor que zero, o programa deverá ser encerrado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    float nota;

    do {
        printf("Informe a nota do aluno ou um valor menor que 0 para encerrar\nNota: ");
        scanf("%f", &nota);
    }while(nota >= 0);

    printf("Programa encerrado...");

    return 0;
}