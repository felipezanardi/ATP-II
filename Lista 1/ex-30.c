/*
Escreva um programa em C que use um array de ponteiros
para armazenar 3 strings, ordene as strings em ordem alfabética e as imprima.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 50
#define QTD 3 // quantidade de strings

void ordenar(char *array[], int n);

int main()
{
    char *array_str[QTD];
    char *string;

    for (int i=0; i<QTD; i++)
    {
        string = malloc(TAMANHO * sizeof(char));

        printf("Digite a %da string: ", i+1);
        gets(string);

        array_str[i] = string;
    }

    ordenar(array_str, QTD);

    printf("\nStrings em ordem alfabetica:\n");

    for (int i=0; i<QTD; i++)
    {
        printf("String %d: %s\n", i+1, array_str[i]);

        free(array_str[i]);
    }

    return 0;
}

void ordenar(char *array[], int n)
{
    char *temp;

    for (int i=0; i < n-1; i++) // bubble sort
    {
        for (int j = i+1; j<n; j++)
        {
            if (strcmp(array[i], array[j]) > 0)
            {
                temp = array[i];

                array[i] = array[j];

                array[j] = temp;
            }
        }
    }
}
