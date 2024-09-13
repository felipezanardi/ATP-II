/*
Escreva um programa em C que multiplique duas matrizes 3x3.
*/

#include <stdio.h>

#define SIZE 3

void imprimir_matriz(int matriz[SIZE][SIZE]);

int main()
{
    int matriz_1[SIZE][SIZE] = {{1,0,0}, {0,1,0}, {0,0,1}};
    int matriz_2[SIZE][SIZE] = {{1,1,1}, {2,2,2}, {3,3,3}};
    int resultado[SIZE][SIZE] = {{0,0,0}, {0,0,0}, {0,0,0}};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            for (int k = 0; k < SIZE; k++)
            {
                resultado[i][j] += matriz_1[i][k] * matriz_2[k][j];
            }
        }
    }

    printf("Resultado:\n");
    imprimir_matriz(resultado);

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
