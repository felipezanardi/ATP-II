/*
Escreva um programa em C que copie os elementos de uma matriz
3x3 para outra matriz.
*/

#include <stdio.h>

#define SIZE 3

void imprimir_matriz(int matriz[SIZE][SIZE]);

int main()
{
    int matriz_1[SIZE][SIZE] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int matriz_2[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            matriz_2[i][j] = matriz_1[i][j];
        }
    }

    printf("Matriz 1:\n");
    imprimir_matriz(matriz_1);

    printf("\nMatriz 2 (copiada):\n");
    imprimir_matriz(matriz_2);

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
