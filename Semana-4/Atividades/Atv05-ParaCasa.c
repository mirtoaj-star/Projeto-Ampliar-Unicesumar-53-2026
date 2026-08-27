/*
    Escreva um programa que receba 10 números inteiros
    e o liste na tela de traz pra frente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int numeros[10];

    for(int i = 0; i < 10; i++) {
        printf("Informe o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Do primeiro para o último\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }


    printf("\n\nDo último para o primeiro\n");
    for(int i = 9; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    return 0;
}