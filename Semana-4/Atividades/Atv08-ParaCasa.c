/*
    Escreva 4 nomes dentro de um array
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    char nomes[4][50];

    for(int i = 0; i < 4; i++) {
        printf("Informe o %d° nome: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    for(int i = 0; i < 4; i++) {
        printf("%d° Nome: %s\n", i + 1, nomes[i]);
    }

    return 0;
}