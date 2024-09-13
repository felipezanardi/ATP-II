/*
Escreva um programa em C que calcule a soma dos elementos de
uma matriz 4x4.
*/

#include <stdio.h>

#define SIZE 4

int main()
{
    int soma=0;
    int matriz[SIZE][SIZE] = {{1,1,1,1}, {2,2,2,2}, {0,0,0,0}, {1,1,1,1}};

    printf("Elementos da matriz:\n");

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d  ", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\n");
    }

    printf("Soma dos elementos: %d\n", soma);

    return 0;
}
