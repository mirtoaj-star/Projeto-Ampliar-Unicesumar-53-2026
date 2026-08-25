/*
    Faça um programa que exiba na tela um cronometro de 2 minutos no molde de min:seg (2:00)

    DICA: FOR
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int minuto;

    printf("Informe a quantidade de minutos para cronometrar: ");
    scanf("%d", &minuto);

    for(int min = 0; min <= minuto; min++) {
        for(int seg = 0; seg <= 59; seg++) {
            system("clear");
            printf("%d:%d\n", min, seg);
            if(min == minuto) {
                printf("O tempo acabou\n");
                break;
            }
            sleep(1);
        }
    }

    return 0;
}