/*
    Escreva um programa em C que calcule o fatorial de um número fornecido pelo usúario
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int numero, fatorial;

    printf("Informe um número: ");
    scanf("%d", &numero);

    fatorial = numero;

    for(int i = 1; i < numero; i++) {
        fatorial *= i;
        printf("%d\n", fatorial);
    }

    // for (int i = numero-1; i >= 1; i--) {
    //     numero *= i;
    // }

    return 0;
}