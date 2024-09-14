/*
Escreva um programa em C que verifique se uma matriz 4x4 é
uma matriz diagonal.
*/

#include <stdio.h>

#define SIZE 4

void imprimir_matriz(int matriz[SIZE][SIZE]);

int main()
{
    int eh_diagonal = 1;
    int matriz[SIZE][SIZE] = {{1,0,0,0}, {0,2,0,0}, {0,0,3,0}, {0,0,0,4}};

    for (int i = 0; i < SIZE && eh_diagonal == 1; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (i != j && matriz[i][j] != 0)
            {
                eh_diagonal = 0;
                break;
            }
        }
    }

    printf("Matriz:\n");
    imprimir_matriz(matriz);

    if (eh_diagonal == 1)
    {
        printf("\nA matriz eh diagonal\n");
    }
    else
    {
        printf("\nA matriz nao eh diagonal\n");
    }

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
