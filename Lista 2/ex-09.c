/*
Escreva um programa em C que encontre o maior elemento em
uma matriz 3x3.
*/

#include <stdio.h>

#define SIZE 3

void imprimir_matriz(int matriz[SIZE][SIZE]);

int main()
{
    int maior;
    int matriz[SIZE][SIZE] = {{1,2,7}, {4,9,2}, {3,7,5}};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (matriz[i][j] > maior || (i == 0 && j == 0))
            {
                maior = matriz[i][j];
            }
        }
    }

    printf("Matriz:\n");
    imprimir_matriz(matriz);

    printf("\nMaior elemento: %d\n", maior);

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
