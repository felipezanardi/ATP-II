/*
Escreva um programa em C que declare um array de 8 inteiros e
passe esse array para uma função que inverta a ordem dos elementos do array.
*/

#include <stdio.h>

void inverter(int *array, int elementos);

void imprimir_array(int *array, int elementos);

int main()
{
    int numeros[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("Array inicial:");
    imprimir_array(numeros, 8);

    inverter(numeros, 8);

    printf("Array invertido:");
    imprimir_array(numeros, 8);

    return 0;
}

void inverter(int *array, int elementos)
{
    for (int i=0; i<elementos/2; i++)
    {
        int aux = array[i];
        array[i] = array[elementos-1-i];
        array[elementos-1-i] = aux;
    }
}

void imprimir_array(int *array, int elementos)
{
    for (int i=0; i<elementos; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");
}
