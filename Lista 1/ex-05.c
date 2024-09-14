/*
Escreva um programa em C que leia 5 valores inteiros, armazene-os
em um array e depois imprima os valores na ordem inversa.
*/

#include <stdio.h>

int main()
{
    int i, valor[5];

    for (i=0; i<5; i++)
    {
        printf("Digite o %do valor: ", i+1);
        scanf("%d",&valor[i]);
    }

    printf("\nValores na ordem inversa:\n");

    for (i=0; i<5; i++)
    {
        printf("%d\n", valor[4-i]);
    }

    return 0;
}
