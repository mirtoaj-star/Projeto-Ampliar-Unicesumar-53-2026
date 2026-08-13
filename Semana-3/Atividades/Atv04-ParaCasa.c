/*
    Escreva um programa que imprima na tela todos os números pares entre 100 e 200.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int i = 100;

    while(i <= 200) {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    printf("Fora do while\n");

    for(int j = 100; j <= 200; j++) {
        if(j % 2 == 0) {
            printf("%d\n", j);
        }
    }

    printf("Fora do for\n");

    int h = 100;

    do {
        if(h % 2 == 0) {
            printf("%d\n", h);
        }

        h++;
    } while(h <= 200);

    printf("Fora do DO WHILE\n");

    return 0;
}