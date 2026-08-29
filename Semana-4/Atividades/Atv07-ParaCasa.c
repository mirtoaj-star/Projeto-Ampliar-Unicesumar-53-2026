/*
    Escreva um algoritmo que leia um nome e escreva-o na tela.

    #include <string.h>

    scanf(" %19[^\n]s", nome);
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

        char nome[20];

        printf("Digite seu nome: ");
        scanf(" %19[^\n]s", nome);

        printf("Nome: %s\n", nome);

    return 0;
}