/*
    Escreva um algoritmo que leia 5 números inteiro
    e depois escreva-os na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int numero[5];

    for(int i = 0; i < 5; i++) {
        printf("Informe o %d° número da posição %d: ", i + 1, i);
        scanf("%d", &numero[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("Posição: %d - %d\n", i,numero[i]);
    }

    return 0;
}