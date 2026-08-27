/*
    Escreva um programa em C que leie 5 números inteiros armazenando-os
    em um vetor.
    O programa deverá informar qual o maior e o menor número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAXIDADE 5

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int numeros[MAXIDADE], maiorNumero, menorNumero;

    for(int i = 0; i < MAXIDADE; i++) {
        printf("Informe o número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if(i == 0) {
            maiorNumero = numeros[i];
            menorNumero = numeros[i];
        } else {
            if(numeros[i] > maiorNumero) {
                maiorNumero = numeros[i];
            }

            if(numeros[i] < menorNumero) {
                menorNumero = numeros[i];
            }
        }
    }

    printf("Maior números é %d\nMenor número é %d", maiorNumero, menorNumero);

    return 0;
}