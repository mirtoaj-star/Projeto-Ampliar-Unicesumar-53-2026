/*
    Escreva um programa que receba 6 notas (em um vetor)
    e calcule a média delas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    const int MAXNOTAS = 6;

    float notas[MAXNOTAS], somaNotas, media;

    for(int i = 0; i < MAXNOTAS; i++) {
        printf("Informe a %d° notas: ", i + 1);
        scanf("%f", &notas[i]);

        if(i == 0) {
            somaNotas = notas[i];
        } else {
            somaNotas += notas[i]; // somaNotas = somaNotas + notas[i];
        }
    }

    media = somaNotas / MAXNOTAS;

    printf("Quantidade de notas: %d\nSoma total das notas: %.2f\nMédia: %.2f", MAXNOTAS, somaNotas, media);

    return 0;
}