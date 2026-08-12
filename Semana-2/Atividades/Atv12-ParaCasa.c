/*
    Escreva um programa em C que receba um ano (Ex: 2025)
    e informe se esse ano é bissexto ou não.

    Para um ano ser bissexto ele deve ser divisí­vel por 4,
    mas não pode ser divisí­vel por 100 (exceto se for divisí­vel por 400)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("O ano %d é bissexto", ano);
    } else {
        printf("O ano %d não é bissexto", ano);
    }

    return 0;
}