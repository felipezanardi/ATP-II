/*
Escreva um programa em C que transponha uma matriz 3x2 para
uma matriz 2x3.
*/

#include <stdio.h>

#define LINHA 3
#define COLUNA 2

int main()
{
    int matriz[LINHA][COLUNA] = {{1,2}, {3,4}, {5,6}};
    int resultado[COLUNA][LINHA];

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            resultado[j][i] = matriz[i][j];
        }
    }

    // imprimir transposta
    printf("Resultado:\n");
    for (int i = 0; i < COLUNA; i++)
    {
        for (int j = 0; j < LINHA; j++)
        {
            printf("%d  ", resultado[i][j]);
        }

    printf("\n");
    }

    return 0;
}
