/*
Escreva um programa em C que declare um array de 6 inteiros e
passe esse array para uma função que conte quantos elementos são positivos.
*/

#include <stdio.h>

int num_positivos(int *array, int elementos);

int main()
{
    int numeros[6] = {1, -2, -3, 4, 5, -6};

    printf("Elementos positivos: %d\n", num_positivos(numeros, 6));

    return 0;
}

int num_positivos(int *array, int elementos)
{
    int positivos = 0;

    for (int i=0; i<elementos; i++)
    {
        if (array[i] > 0)
        {
            positivos++;
        }
    }

    return positivos;
}
