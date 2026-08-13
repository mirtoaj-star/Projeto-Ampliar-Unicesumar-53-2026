/*
    Escreva um algoritmo que peça o salário do funcionário e depois fique perguntando quantos % de aumente quer dar funcionário até que chegue em R$10.000,00
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    float salario, aumento;
    int porcentagem;

    printf("Informe o salário do funcionário: ");
    scanf("%f", &salario);

    do {
        printf("Quantos %% de aumento dará para o funcionário: ");
        scanf("%d", &porcentagem);

        aumento = salario * (porcentagem / 100.0);

        salario = salario + aumento; // salario += aumento;

        printf("Aumento: R$%.2f\nSalário atualizado: R$%.2f\n\n",aumento, salario);
        system("pause");
        system("cls"); // "clear"
    } while(salario < 10000);

    printf("Finalizou com salário sinistrão de R$%.2f", salario);

    return 0;
}