/*
Escreva um programa em C que use um array de ponteiros
para armazenar 4 strings e encontre a string de maior comprimento.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50 // tamanho da string
#define QTD 4 // quantidade de strings

int main()
{
    char *strings[QTD];

    int maior = 0, maior_ind = 0;

    for (int i=0; i<QTD; i++)
    {
        strings[i] = malloc(TAM * sizeof(char));

        printf("Digite a %da string: ", i+1);
        fgets(strings[i], TAM, stdin);

        int tamstr = strlen(strings[i]);

        if (tamstr > maior)
        {
            maior = tamstr;
            maior_ind = i; // salva o índice da maior string
        }
    }

    printf("\nMaior string: %s", strings[maior_ind]);

    for (int i=0; i<QTD; i++)
    {
        free(strings[i]);
    }

    return 0;
}
