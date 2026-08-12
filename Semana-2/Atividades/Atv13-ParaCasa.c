/*
    Escreva um programa em C que peça ao usuário o salário e o tempo de trabalho em anos.
    O programa deverá calcular um bônus de 5% sobre o salário se o tempo de trabalho for superior a 5 anos.

    "salario * 0,05"
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int anos;
    float salario, salario_novo, bonus;

    printf("Qual o seu salário: ");
    scanf("%f", &salario);

    printf("Quantos anos você trabalha: ");
    scanf("%d", &anos);

    if (anos > 5) {
        bonus = salario * 0.05;
        salario_novo = salario + bonus;
        printf("Seu novo salário é: R$%.2f\n", salario_novo);
    }
    else {
        printf("Você teve um aumento\n");
    }

    return 0;
}