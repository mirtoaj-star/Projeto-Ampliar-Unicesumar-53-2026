/*
    Escreva um algoritmo em C que exiba na tela todos os números í­mpares entre 53 e 98.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int i = 53;

    while(i <= 98) {
        if(i % 2 != 0) {
            printf("%d\n", i);
        }
        i++;
    }

    printf("Encerrando...");
    return 0;
}