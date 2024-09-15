/*
Escreva um programa em C que use um array de ponteiros
para armazenar 4 strings e encontre a string de maior comprimento.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 50
#define QTD 4 // quantidade de strings

int main()
{
    char *arr_ptr[QTD]; // array de ponteiros

    // alocar memória
    for (int i = 0; i < QTD; i++)
    {
        arr_ptr[i] = malloc(TAMANHO * sizeof(char));
    }

    // ler strings
    for (int i = 0; i < QTD; i++)
    {
        printf("Digite a %da string: ", i+1);
        gets(arr_ptr[i]);
    }

    // encontrar a maior string
    char *maior = arr_ptr[0];

    for (int i = 1; i < QTD; i++)
    {
        if (strlen(arr_ptr[i]) > strlen(maior))
        {
            maior = arr_ptr[i];
        }
    }

    printf("\nString de maior comprimento: %s\n", maior);

    // liberar memória alocada
    for (int i = 0; i < QTD; i++)
    {
        free(arr_ptr[i]);
    }

    return 0;
}
