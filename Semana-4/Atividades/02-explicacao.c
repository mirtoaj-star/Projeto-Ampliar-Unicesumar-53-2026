#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    // int matriz[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    int matriz[3][3];

    for(int linha = 0; linha < 3; linha++) {
        for(int coluna = 0; coluna < 3; coluna++) {
            printf("Informe um número para colocar na posição [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }



    for(int linha = 0; linha < 3; linha++) {
        for(int coluna = 0; coluna < 3; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}