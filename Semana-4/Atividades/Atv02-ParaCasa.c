/*
    Escreva um programa que armazene 5 idades em um vetor.
    Como saída, deverá informar quem é a pessoal mais velha.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXIDADE 5

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int idades[MAXIDADE], maisVelho;

    for(int i = 0; i < MAXIDADE; i++) {
        printf("Informe a idade %d: ", i + 1);
        scanf("%d", &idades[i]);

        if(i == 0) {
            maisVelho = idades[i];
        } else {
            if(idades[i] > maisVelho) {
                maisVelho = idades[i];
            }
        }
    }

    printf("A idade mais velha é %d", maisVelho);

    return 0;
}