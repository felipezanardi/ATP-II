/*
Escreva um programa em C que declare e inicialize uma matriz
3x3 e imprima seus elementos.
*/

#include <stdio.h>

#define SIZE 3

int main()
{
    int matriz[SIZE][SIZE] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("Elementos da matriz:\n");

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
