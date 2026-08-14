/*
    Escreva um código que exiba na tela um menu com as opções:

    1. Somar 2 numeros
    2. Multiplicar 2 numeros
    3. Encerrar

    O programa só poderá ser finalizado quando o usuário escolher a opção 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int opcao;
    float num1, num2, resultado;

    do {
        printf(
            "\n::: Menu :::\n"
            "1. Somar 2 números\n"
            "2. Multiplicar 2 números\n"
            "3. Encerrar\n"
            "Escolha uma opção: "
        );
        scanf("%d", &opcao);

        if(opcao == 1 || opcao == 2) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;

        case 2:
            resultado = num1 * num2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;

        case 3:
            printf("Encerrando o programa...\n");
            break;
        
        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
        }
    } while (opcao != 3);

    return 0;
}