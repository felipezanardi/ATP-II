/*
Escreva um programa em C que use um array de ponteiros
para armazenar 5 números inteiros e encontre o maior valor entre eles.
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD 5 // quantidade de números

int main()
{
    int *arr_ptr[QTD]; // array de ponteiros

    // alocar memória
    for (int i = 0; i < QTD; i++)
    {
        arr_ptr[i] = malloc(sizeof(int));
    }

    // ler numeros
    for (int i = 0; i < QTD; i++)
    {
        printf("Digite o %do numero: ", i+1);
        scanf("%d", arr_ptr[i]);
    }

    // encontrar o maior número
    int *maior = arr_ptr[0];

    for (int i = 1; i < QTD; i++)
    {
        if (*arr_ptr[i] > *maior)
        {
            maior = arr_ptr[i];
        }
    }

    printf("\nMaior numero: %d\n", *maior);

    // liberar a memória alocada
    for (int i = 0; i < QTD; i++)
    {
        free(arr_ptr[i]);
    }

    return 0;
}
