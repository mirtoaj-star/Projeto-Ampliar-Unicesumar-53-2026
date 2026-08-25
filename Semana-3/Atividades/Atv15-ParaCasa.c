/*
    Crie um programa que leia dois números inteiros A e B e calcule A elevado à potência de B.
    Exemplo: Leu 5 e 3, vai calcular 5³.

    5*5*5
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int a, b, resultado = 1;

    printf("Informe o primeiro número: ");
    scanf("%d", &a);

    printf("Informe o segundo número: ");
    scanf("%d", &b);

    for(int i = 1; i <= b; i++) {
        resultado *= a; // resultado = resultado * a;
    }

    printf("Número %d elevado a número %d é %d\n", a, b, resultado);

    return 0;
}