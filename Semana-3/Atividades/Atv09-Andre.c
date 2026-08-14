#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    char resp;
    int numero, potencia;
 
    do
    {
        printf("Digite um numero que deseja fazer a potencia: \n");
        scanf("%d", &numero);
        potencia = pow(numero, 2);
        printf("%d", potencia);
        printf("\nDeseja continuar? S/N \n");
        scanf(" %c", &resp);
       
       
 
    } while (resp == 's');
   
    printf("Encerrando o programa...");
   
    return 0;
}