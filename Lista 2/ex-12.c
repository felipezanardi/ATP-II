/*
Escreva um programa em C que calcule a média dos elementos de
uma matriz 2x4.
*/

#include <stdio.h>

#define LINHA 2
#define COLUNA 4

void imprimir_matriz(int matriz[LINHA][COLUNA]);

int main()
{
    float soma = 0;
    int matriz[LINHA][COLUNA] = {{1,2,3,4}, {5,6,7,8}};

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            soma += matriz[i][j];
        }
    }

    float media = soma / (LINHA * COLUNA);

    printf("Matriz:\n");
    imprimir_matriz(matriz);

    printf("\nMedia dos elementos: %.2f\n", media);

    return 0;
}

void imprimir_matriz(int matriz[LINHA][COLUNA])
{
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
}
