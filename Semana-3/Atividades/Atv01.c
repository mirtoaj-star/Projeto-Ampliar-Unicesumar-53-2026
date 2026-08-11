/*
    Escreva um programa que exiba na tela a contagem de 0 até 20.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    for(int i = 0; i <= 20; i = i+1) {
        printf("%d\n", i);
    }

    

    return 0;
}