/*
Escreva um programa em C que inverta a ordem das linhas de
uma matriz 3x3.
*/

#include <stdio.h>

#define SIZE 3

void imprimir_matriz(int matriz[SIZE][SIZE]);

int main()
{
    int matriz[SIZE][SIZE] = {{1,1,1}, {2,2,2}, {3,3,3}};
    int matriz_inv[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        int k = SIZE-1-i; // contador

        for (int j = 0; j < SIZE; j++)
        {
            matriz_inv[k][j] = matriz[i][j];
        }
    }

    printf("Matriz inicial:\n");
    imprimir_matriz(matriz);

    printf("\nMatriz com linhas invertidas:\n");
    imprimir_matriz(matriz_inv);

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
