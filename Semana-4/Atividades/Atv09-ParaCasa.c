/*
    Escreva um programa que receba o modelo e o preço de 4 carros.
    O programa deverá informar qual é o carro mais barato e qual o mais caro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXCARROS 4

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    char modelo[MAXCARROS][30];
    float preco[MAXCARROS];
    int indiceMaisCaro, indiceMaisBarato;

    for(int i = 0; i < MAXCARROS; i++) {
        printf("Informe o modelo do %d° carro: ", i + 1);
        fgets(modelo[i], sizeof(modelo[i]), stdin);
        modelo[i][strcspn(modelo[i], "\n")] = '\0';

        printf("Informe o preco deste veículo: ");
        scanf("%f", &preco[i]);
        getchar();

        printf("\n");

        if(i == 0) {
            indiceMaisCaro = i;
            indiceMaisBarato = i;
        } else {
            if(preco[i] > preco[indiceMaisCaro]) {
                indiceMaisCaro = i;
            }

            if(preco[i] < preco[indiceMaisBarato]) {
                indiceMaisBarato = i;
            }
        }
    }

    printf(
        "Carro mais CARO\n"
        "Modelo: %s\n"
        "Valor: %.2f\n", modelo[indiceMaisCaro], preco[indiceMaisCaro]
    );

    printf(
        "\nCarro mais BARATO\n"
        "Modelo: %s\n"
        "Valor: %.2f\n", modelo[indiceMaisBarato], preco[indiceMaisBarato]
    );

    return 0;
}