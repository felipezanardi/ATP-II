/*
Escreva um programa em C que declare um array de 12
caracteres e use aritmética de ponteiros para inverter a ordem dos caracteres no
array.
*/

#include <stdio.h>

void imprimir_array(char array[]);

int main()
{
    char array[12] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};
    char *ptr = array;

    printf("Array inicial:");
    imprimir_array(array);

    for (int i=0; i<6; i++)
    {
        char aux = *(ptr + i);
        *(ptr + i) = *(ptr + 11 - i);
        *(ptr + 11 - i) = aux;
    }

    printf("Array final:");
    imprimir_array(array);

    return 0;
}

void imprimir_array(char array[])
{
    for (int i=0; i<12; i++)
    {
        printf(" %c", array[i]);
    }
    printf("\n");
}
