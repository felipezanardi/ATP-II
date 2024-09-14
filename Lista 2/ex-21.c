/*
Escreva um programa em C que verifique se uma matriz 3x3 é
uma matriz de permutação.
*/

#include <stdio.h>

#define LINHA 3
#define COLUNA 3

void imprimir_matriz(int *ptr_matriz, int linha, int coluna);

int eh_permutacao(int matriz[LINHA][COLUNA]);

int main()
{
    int matriz[LINHA][COLUNA] = {
        {0,0,1},
        {1,0,0},
        {0,1,0}};

    printf("Matriz:\n");
    imprimir_matriz(matriz, LINHA, COLUNA);

    if (eh_permutacao(matriz) == 1)
    {
        printf("\nEh uma matriz de permutacao\n");
    }
    else
    {
        printf("\nNao eh uma matriz de permutacao\n");
    }

    return 0;
}

void imprimir_matriz(int *ptr_matriz, int linha, int coluna)
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            // formula para acessar elemento: linha * quant elementos da linha + coluna
            printf("%d  ", *(ptr_matriz + i * coluna + j));
        }
        printf("\n");
    }
}

// em uma matriz de permutacao, soma das linha e soma das colunas devem ser = 1
int eh_permutacao(int matriz[LINHA][COLUNA])
{
    for (int i = 0; i < LINHA; i++)
    {
        int soma_linha = 0;
        int soma_coluna = 0;

        for (int j = 0; j < COLUNA; j++)
        {
            soma_linha += matriz[i][j];
            soma_coluna += matriz[j][i];
        }

        if (soma_linha != 1 || soma_coluna != 1)
        {
            return 0;
        }
    }

    return 1;
}
