/*
    Escreva um programa que receba uma frase e a escreva de trás pra frente.

    Exemplo:

    Frase: OLÁ PESSOAL DO AMPLIAR!
    Resultado: !RAILPMA OD LAOSSEP ÁLO
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    system("clear");

    char frase[100];

    printf("Informe a frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    printf("%s\n", frase);

    int tamanhoFrase = strlen(frase);

    for(int i = tamanhoFrase; i >= 0; i--) {
        printf("%c", frase[i]);
    }

    return 0;
}