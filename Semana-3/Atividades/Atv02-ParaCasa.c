/*
    Escreva um programa que exiba na tela a contagem regressiva de 30 até 0.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"Portuguese_Brazil");
    system("cls");

    for(int i = 30; i >= 0; i--) {
        printf("%d\n", i);
    }


    return 0;
}