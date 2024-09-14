/*
Escreva um programa em C que conte quantos elementos pares
existem em uma matriz 3x3.
*/

#include <stdio.h>

#define SIZE 3

void imprimir_matriz(int matriz[SIZE][SIZE]);

int main()
{
    int pares = 0;
    int matriz[SIZE][SIZE] = {{1,2,7}, {4,9,2}, {3,7,5}};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                pares++;
            }
        }
    }

    printf("Matriz:\n");
    imprimir_matriz(matriz);

    printf("\nElementos pares: %d\n", pares);

    return 0;
}

void imprimir_matriz(int matriz[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
}
