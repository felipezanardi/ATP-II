/*
Escreva um programa em C que encontre a posição (linha e coluna)
de um elemento específico em uma matriz 3x3.
*/

#include <stdio.h>

#define SIZE 3

void imprimir_matriz(int matriz[SIZE][SIZE]);

int main()
{
    int linha, coluna;
    int matriz[SIZE][SIZE] = {{1,2,3}, {4,5,6}, {7,8,9}};

    printf("Matriz:\n");
    imprimir_matriz(matriz);

    printf("\nEscolha um elemento:\n");

    do
    {
        printf("Linha (0 - %d): ", SIZE-1);
        scanf("%d", &linha);
    }
    while(linha > SIZE-1 || linha < 0);

    do
    {
        printf("Coluna (0 - %d): ", SIZE-1);
        scanf("%d", &coluna);
    }
    while(coluna > SIZE-1 || coluna < 0);

    printf("\nElemento da linha %d coluna %d: %d\n", linha, coluna, matriz[linha][coluna]);

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
