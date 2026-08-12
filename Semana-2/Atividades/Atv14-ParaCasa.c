/*
    Escreva um programa que receba o salário de uma pessoa e calcule o imposto de renda dela baseado na tabela abaixo:
    - Até 2259,20, IRPF 0%
    - De R$ 2.259,21 até R$ 2.826,65, IRPF 7,5%
    - De R$ 2.826,66 até R$ 3.751,05, IRPF 15,0%
    - De R$ 3.751,06 até R$ 4.664,68, IRPF 22,5%
    - Acima de R$ 4.664,68, IRPF 27,5%
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    float salario, imposto;

    printf("Digite o Salário: ");
    scanf("%f", &salario);

    if ( salario <= 2259.20) {
        imposto = 0.0;
        printf("Insento de IRPF: R$%.1f\n", imposto);
    } else if (salario <= 2826.65) {
        imposto = 0.075 * salario;
        printf("IRPF é de 7.5%%: R$%.2f\n", imposto);
    } else if ( salario <= 3751.05) {
        imposto = 0.15 * salario;
        printf("IRPF é de 15%%: R$%.2f\n", imposto);
    } else if ( salario <= 4664.68) {
        imposto = 0.225 * salario;
        printf(" IRPF é de 22.5%%: R$%.2f\n", imposto);
    } else {
        imposto = 0.275 * salario;
        printf("IRPF é de 27.5%%: R$%.2f\n", imposto);
    }


    return 0;
}