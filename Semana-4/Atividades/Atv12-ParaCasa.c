/*
    Escreva um programa que receba 10 números inteiros e os ordene em ordem crescente

    Bubble Sort
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    system("clear");

    const int MAXNUMERO = 10;
    int numero[MAXNUMERO], aux;

    for(int i = 0; i < MAXNUMERO; i++) {
        printf("Informe o %d° número: ", i + 1);
        scanf("%d", &numero[i]);
    }

    for(int i = 0; i < MAXNUMERO; i++) {
        for(int j = 0; j < MAXNUMERO - i - 1; j++) {
            if(numero[j] > numero[j + 1]) {
                aux = numero[j + 1];
                numero[j + 1] = numero[j];
                numero[j] = aux;
            }
        }
    }

    for(int i = 0; i < MAXNUMERO; i++) {
        printf("%d ", numero[i]);
    }

    return 0;
}