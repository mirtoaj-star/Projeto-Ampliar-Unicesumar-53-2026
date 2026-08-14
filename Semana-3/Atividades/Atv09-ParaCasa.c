/*
    Um programa que receba um número e retorne a pontencia por 2 (x²)
    O programa precisa perguntar ao usuário se ele deseja encerrar (s ou n)
    ou calcular outro número
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    float numero, resultado;
    char opcao;

    do {
        printf("Informe um número: ");
        scanf("%f", &numero);
        getchar();

        resultado = pow(numero, 2); // numero * numero
        printf("%.0f² = %.0f\n", numero, resultado);

        printf("Deseja encerrar o programa? Digite [s] ou [n]: ");
        scanf("%c", &opcao);

        if (opcao == 's' || opcao == 'S') {
            printf("Programa Encerrado...\n");
        }

    } while(opcao == 'n' || opcao == 'N');

    return 0;
}
