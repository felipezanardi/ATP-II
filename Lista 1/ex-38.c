/*
Escreva um programa em C que declare um array de 10 inteiros e
passe esse array para uma função que encontre o maior elemento do array.
*/

#include <stdio.h>

int maior(int *array, int elementos);

int main()
{
    int numeros[10] = {1, 6, 3, 8, 4, 10, 7, 5, 9, 2};

    printf("Maior elemento: %d\n", maior(numeros, 10));

    return 0;
}

int maior(int *array, int elementos)
{
    int resultado = array[0];

    for (int i=1; i<elementos; i++)
    {
        if (array[i] > resultado)
        {
            resultado = array[i];
        }
    }

    return resultado;
}
