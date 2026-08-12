/*
    Escreva um programa em C para resolver a fórmula de Bhaskara.

    Entrada de dados:
    - Valor de A, B e C.

    Processamento:
    - Verificar se A é diferente de 0.
    - Calcular o delta. (delta = b² - 4.a.c)
    - Verificar se o delta é:
        - negativo: A equação não possui raízes reais
        - igual a zero: calcular apenas x = -b / 2a
        - positivo: x = -b +- raiz de delta / 2.a
    - Calcular as raízes quando possível.

    Saída:
    - Exibir o valor do delta.
    - Exibir as raízes reais da equação.

    Teste:
    A = 1
    B = -5
    C = 6

    Delta = 1
    X1 = 3
    X2 = 2

    Veja mais sobre a fórmula de Bhaskara em:
    https://www.todamateria.com.br/formula-de-bhaskara/
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    float numeroA, numeroB, numeroC, delta, x1, x2;

    printf("Informe o valor de A: ");
    scanf("%f", &numeroA);

    printf("Informe o valor de B: ");
    scanf("%f", &numeroB);

    printf("Informe o valor de C: ");
    scanf("%f", &numeroC);

    if(numeroA == 0) {
        printf("Não é uma equação do segundo grau, pois A deve ser diferente de 0\n");
        return 1;
    } else {
        delta = pow(numeroB, 2) - (4 * numeroA * numeroC);

        if(delta < 0) {
            printf("\nDelta = %.2f\n", delta);
            printf("A equação não possui raízes reais\n");
        } else if(delta == 0) {
            // x = -b / 2a
            x1 =  -numeroB / (2 * numeroA);

            printf("\nDelta = %.2f\n", delta);
            printf("A equação possui apenas uma raiz real.\n");
            printf("X = %.2f\n", x1);
        } else {
            // x = -b +- ?? / 2.a
            x1 = (-numeroB + sqrt(delta)) / (2 * numeroA);
            x2 = (-numeroB - sqrt(delta)) / (2 * numeroA);

            printf("\nDelta = %.0f\n", delta);
            printf("A equação possui duas raízes reais\n");
            printf(
                "X1 = %.0f\n"
                "X2 = %.0f\n", x1, x2
            );
        }
    }

    return 0;
}