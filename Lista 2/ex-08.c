/*
Escreva um programa em C que realize a rotação de uma matriz
quadrada 4x4 no sentido horário.
*/

#include <stdio.h>

#define SIZE 4

void imprimir_matriz(int matriz[SIZE][SIZE]);

int main()
{
    int matriz[SIZE][SIZE] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int matriz_modificada[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            matriz_modificada[i][j] = matriz[SIZE-1-j][i];
        }
    }

    printf("Matriz inicial:\n");
    imprimir_matriz(matriz);

    printf("\nMatriz modificada:\n");
    imprimir_matriz(matriz_modificada);

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
