/*
    Escreva um programa que receba o modelo e o preço de 4 carros.
    O programa deverá informar qual é o carro mais barato e qual o mais caro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 
int main() {
    int carros[4];
    char CarName[4][100];
    int CarBarato, CarCaro;
    char CaroName[100];
    char BaratoName[100];

    for (int i = 0; i < 4; i++) {
        printf("\ninforme o modelo do carro\n");
        scanf(" %99[^\n]s", &CarName[i]);

        printf("Informe o preco do Carro\n");
        scanf("%d", &carros[i]);
   
        if (i == 0){
            CarBarato = carros[i];
            CarCaro = carros[i];

            strcpy(BaratoName, CarName[i]);
            strcpy(CaroName, CarName[i]);
        } else{
            if (CarBarato > carros[i]){
                CarBarato = carros[i];
                strcpy(BaratoName, CarName[i]);
            }

            if (CarCaro < carros[i]){
                CarCaro = carros[i];
                strcpy(CaroName, CarName[i]);
            }
        
        }
    
    }
    
    printf("\nO Carro mais caro foi: %s, com o preco: %d\n.", CaroName ,CarCaro );
    printf("\nO Carro mais barato foi: %s, com o preco: %d\n", BaratoName, CarBarato);
 
    return 0;
}