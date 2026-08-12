/*
    Escreva um programa que leia 4 idades e informe qual a mais velha e qual a mais nova.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");

    int idade1, idade2, idade3, idade4, maisVelho, maisNovo;

    printf("Digite a primeira idade: ");
    scanf("%d", &idade1);

    printf("Digite a segunda idade: ");
    scanf("%d", &idade2);

    printf("Digite a terceira idade: ");
    scanf("%d", &idade3);

    printf("Digite a quarta idade: ");
    scanf("%d", &idade4);

    maisVelho = idade1;
    maisNovo = idade1;

    if(maisVelho < idade2)  { maisVelho = idade2;}
    if(maisNovo  > idade2)  { maisNovo  = idade2;}

    if(maisVelho < idade3)  { maisVelho = idade3;}
    if(maisNovo  > idade3)  { maisNovo  = idade3;}

    if(maisVelho < idade4)  { maisVelho = idade4;}
    if(maisNovo  > idade4)  { maisNovo  = idade4;}

    printf("Maior idade = %d\nMenor idade = %d", maisVelho, maisNovo);

    return 0;
}