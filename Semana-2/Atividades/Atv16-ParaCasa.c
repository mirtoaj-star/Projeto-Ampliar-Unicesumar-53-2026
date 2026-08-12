/*
    Escreva um programa em C que leia a medida dos 3 lados de uma forma geométrica.
    O programa deverá usar o teorema de Pitágoras para definir se esta forma é um triângulo.
    Caso seja um triangulo verifique se é um triângulo retânculo ou não.

    Formula Triângulo :
    A+B > C  ||  B+C > A  ||  C+A > B
    
    Formula Triângulo Retângulo:
    C² = A² + B² || B² = A² + C² || A² = C² + B²
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    float ladoA, ladoB, ladoC;

    printf("Informe o lado A: ");
    scanf("%f", &ladoA);

    printf("Informe o lado B: ");
    scanf("%f", &ladoB);

    printf("Informe o lado C: ");
    scanf("%f", &ladoC);

    if(ladoA + ladoB > ladoC ||ladoB + ladoC > ladoA || ladoC + ladoA > ladoB) {
        printf("Esta figura geométrica é um triângulo ");

        if(
            pow(ladoC, 2) == pow(ladoA, 2) + pow(ladoB, 2) ||
            pow(ladoB, 2) == pow(ladoA, 2) + pow(ladoC, 2) ||
            pow(ladoA, 2) == pow(ladoC, 2) + pow(ladoB, 2)

            // (ladoC * ladoC) == (ladoA * ladoA) + (ladoB * ladoB) ||
            // (ladoB * ladoB) == (ladoA * ladoA) + (ladoC * ladoC) ||
            // (ladoA * ladoA) == (ladoC * ladoC) + (ladoB * ladoB)
        ) {
            printf("e também é um triângulo retângulo");
        }
    } else {
        printf(" Esta figura não pode ser um triângulo\n");
    }
    return 0;
}