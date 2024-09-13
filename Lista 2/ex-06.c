/*
Escreva um programa em C que calcule a diagonal principal de
uma matriz 5x5.
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    int soma=0;
    int matriz[SIZE][SIZE] = {{1,0,0,0,0},{0,1,0,0,0},{0,0,1,0,0},{0,0,0,1,0},{0,0,0,0,1}};

    for (int i = 0; i < SIZE; i++)
    {
        soma += matriz[i][i];
    }

    printf("Soma: %d\n", soma);

    return 0;
}
