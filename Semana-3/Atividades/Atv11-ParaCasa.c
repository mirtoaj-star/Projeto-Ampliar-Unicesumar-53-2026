/*
    Escreva um programa que receba 6 idades e informe quem é o mais novo e o mais velho.
    
    Necessário, ainda, informar se essas duas idades (menor e maior) são maior ou menor que 18 anos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int idade, maisNovo, maisVelho;

    for(int i = 1; i <= 6; i++){
        printf("Digite a idade %d: ", i);
        scanf("%d", &idade);

        if(i == 1) {
            maisNovo = idade;
            maisVelho = idade;
        } else {
            if(idade < maisNovo) {
                maisNovo = idade;
            }

            if(idade > maisVelho) {
                maisVelho = idade;
            }
        }
    }

    printf("A menor idade é: %d ", maisNovo);
    if(maisNovo >= 18) {
        printf("e é maior de 18 anos\n");
    } else {
        printf("e é menor de 18 anos\n");
    }

    printf("A maior idade é: %d ", maisVelho);
    if(maisVelho >= 18) {
        printf("e é maior de 18 anos\n");
    } else {
        printf("e é menor de 18 anos\n");
    }

    return 0;
}