/*
Escreva um programa em C que encontre o menor elemento em
uma matriz 4x4.
*/

#include <stdio.h>

#define SIZE 4

void imprimir_matriz(int matriz[SIZE][SIZE]);

int main()
{
    int menor;
    int matriz[SIZE][SIZE] = {{1,2,7,0}, {4,9,2,-1}, {3,7,-5,5}, {1,2,7,0}};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (matriz[i][j] < menor || (i == 0 && j == 0))
            {
                menor = matriz[i][j];
            }
        }
    }

    printf("Matriz:\n");
    imprimir_matriz(matriz);

    printf("\nMenor elemento: %d\n", menor);

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
