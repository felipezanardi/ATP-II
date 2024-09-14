/*
Escreva um programa em C que calcule o determinante de uma
matriz quadrada 3x3.
*/

#include <stdio.h>

#define SIZE 3

void imprimir_matriz(int *ptr_matriz, int linha, int coluna);

int det(int matriz[SIZE][SIZE]);

int main()
{
    int matriz[SIZE][SIZE] = {{1,2,0}, {3,5,2}, {0,0,2}};

    printf("Matriz:\n");
    imprimir_matriz(matriz, SIZE, SIZE);

    printf("\nDeterminante da matriz: %d\n", det(matriz));

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

int det(int matriz[SIZE][SIZE])
{
    int determinante = 0;

    for (int i = 0; i < SIZE; i++)
    {
        int diag_principal = 1; // produto da diagonal principal
        int diag_secundaria = 1; // produto da diagonal secundaria

        for (int j = 0; j < SIZE; j++)
        {
            diag_principal *= matriz[j][(i + j) % SIZE];
            diag_secundaria *= matriz[j][(i - j + SIZE) % SIZE];
        }

        determinante += diag_principal - diag_secundaria;
    }

    return determinante;
}
