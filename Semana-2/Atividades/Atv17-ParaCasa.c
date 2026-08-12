/*
    Escreva um programa que simule um caixa eletrónico: leia o valor do saque e mostre
    quantas notas de 100, 50, 20, 10, 5 e 2 são necessárias.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int valorSaque, notas100, notas50, notas20, notas10, notas5, notas2, restante;

    printf("Informe o valor que deseja sacar: ");
    scanf("%d", &valorSaque);

    if(valorSaque <= 0) {
        printf("Valor inválido\nErro...");
        return 1;
    }

    notas100 = valorSaque / 100;
    restante = valorSaque % 100;

    notas50 = restante / 50;
    restante = restante % 50; // restante %= 50

    notas20 = restante / 20;
    restante %= 20; // isso é igual a isso restante = restante % 20;

    notas10 =  restante / 10;
    restante %= 10; // restante = restante % 10

    notas5 = restante / 5;
    restante %= 5; // restante = restante % 5

    notas2 = restante / 2;
    restante %= 2; // restante = restante % 2

    printf("Para o saque de R$%d,00 será necessário:\n", valorSaque);
    printf(
        "Notas de R$100,00: %d\n"
        "Notas de R$50,00: %d\n"
        "Notas de R$20,00: %d\n"
        "Notas de R$10,00: %d\n"
        "Notas de R$5,00: %d\n"
        "Notas de R$2,00: %d\n", notas100, notas50, notas20, notas10, notas5, notas2
    );

    return 0;
}