/*
Escreva um programa em C que use um array de ponteiros
para armazenar 5 números inteiros e encontre o maior valor entre eles.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 5 // quantidade de inteiros

int main()
{
    int *numeros[QTD];
    int maior;

    for (int i=0; i<QTD; i++)
    {
        numeros[i] = malloc(sizeof(int));

        printf("Digite o %do numero: ", i+1);
        scanf("%d", numeros[i]);

        if (*numeros[i] > maior || i == 0)
        {
            maior = *numeros[i];
        }

        free(numeros[i]);
    }

    printf("\nMaior numero: %d\n", maior);

    return 0;
}
