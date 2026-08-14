#include <stdio.h>
#include <stdlib.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main() {
 
	/*
    Um programa que receba um número e retorne a pontencia por 2 (x²)
    O programa precisa perguntar ao usuário se ele deseja encerrar (s ou n)
    ou calcular outro número
	*/
	float n, potencia;
	char opcao;

	printf("Insira um numero: ");
	scanf("%f", &n);
	potencia = n * n;
	printf("\nA potencia de %.2f e: %.2f", n, potencia);
	printf("\nDeseja encerrar o programa? Digite [s] ou [n]: ");
	scanf(" %c", &opcao);
	while(opcao == 'n' || opcao == 'N'){
			printf("\nInsira um numero: ");
			scanf("%f", &n);
			potencia = n * n;
			printf("\nA potencia de %.2f e: %.2f", n, potencia);
				printf("\nDeseja encerrar o programa? Digite [s] ou [n]: ");
				scanf(" %c", &opcao);
	}
	printf("\nPrograma encerrado!");			
	return 0;
}