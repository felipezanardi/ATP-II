/*
Escreva um programa em C que use um array de ponteiros
para armazenar 3 strings, ordene as strings em ordem alfabética e as imprima.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50 // tamanho da string
#define QTD 3 // quantidade de strings

void ordernar(char *strings[], int n);

int main()
{
    char *strings[QTD];

    for (int i=0; i<QTD; i++)
    {
        strings[i] = malloc(TAM * sizeof(char));

        printf("Digite a %da string: ", i+1);
        fgets(strings[i], TAM, stdin);
    }

    printf("\n");

    ordernar(strings, QTD);

    for (int i=0; i<QTD; i++)
    {
        printf("String %d: %s", i+1, strings[i]);

        free(strings[i]);
    }

    return 0;
}

void ordernar(char *strings[], int n)
{
    for (int i = 0; i<n; i++) // bubble sort
    {
        for (int j = i+1; j<n; j++)
        {
            if (strcmp(strings[i], strings[j]) > 0)
            {
                char *temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}
