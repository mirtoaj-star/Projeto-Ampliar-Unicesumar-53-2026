#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    // int numero;
    // printf("Informe um número: ");
    // scanf("%d", &numero);

    // printf("Valor: %d\n", numero);
    // printf("Endereço: %p", &numero);

    int numeros[5]; // = {10, 20, 30, 40, 50};
    
    for(int i = 0; i < 5; i++) {
        printf("Informe o número na posição %d: ", i);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("Número[%d] = %d / Endereço: %p\n", i, numeros[i], &numeros[i]);
    }

    return 0;
}