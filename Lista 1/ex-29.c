/*
Escreva um programa em C que use um array de ponteiros para
armazenar e imprimir 5 strings.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 50 // tamanho da string

int main()
{
    char *strings[5];

    for (int i=0; i<5; i++)
    {
        strings[i] = malloc(TAM * sizeof(char));

        printf("Digite a %da string: ", i+1);
        fgets(strings[i], TAM, stdin);
    }

    printf("\n");

    for (int i=0; i<5; i++)
    {
        printf("String %d: %s", i+1, strings[i]);

        free(strings[i]);
    }

    return 0;
}
