#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
 
int main() {
    int numero, base, exponencial = 2, resultado;
    char parar;
 
    do {
        printf("Digite um numero para calcular a potencia: ");
        scanf("%d", &numero);
 
        base = numero;
        resultado = pow(base, exponencial);
        printf("O resultado e igual: %d\n", resultado);
 
        printf("Deseja encerrar? S ou N:\n" );
        scanf(" %c", &parar);
 
        if(parar != 'N' && parar != 'n' ){
            break;
        }
    } while(1);
 
    printf("Programa encerrado.");
   
}