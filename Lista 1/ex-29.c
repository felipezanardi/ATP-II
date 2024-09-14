/*
Escreva um programa em C que use um array de ponteiros para
armazenar e imprimir 5 strings.
*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 20

int main()
{
    char *strings[5];
    char *string;

    for (int i=0; i<5; i++)
    {
        printf("Digite a %da string: ", i+1);
        
        string = malloc(TAMANHO * sizeof(char));

        gets(string);

        strings[i] = string;
    }

    for (int i=0; i<5; i++)
    {
        printf("String %d: %s\n", i+1, strings[i]);

        free(strings[i]);
    }

    return 0;
}
