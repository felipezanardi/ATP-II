/*
Escreva um programa em C que declare um array de 12
caracteres e use aritmética de ponteiros para inverter a ordem dos caracteres no
array.
*/

#include <stdio.h>

int main()
{
    char array[12] = {'x', 'b', 'c', 'a', 'h', 'j', 'w', 'd', 'k', 'c', 'n', 'q'};
    char *ponteiro = array, temp;

    int j = 11;

    printf("Elementos da array inicial:\n");

    for (int i=0; i<12; i++)
    {
        printf("%c ", array[i]);
    }

    for (int i=0; i<6; i++)
    {
        temp = *(ponteiro+i);
        *(ponteiro+i) = *(ponteiro+j);
        *(ponteiro+j) = temp;
        j--;
    }

    printf("\nElementos da array final:\n");

    for (int i=0; i<12; i++)
    {
        printf("%c ", array[i]);
    }
    
    return 0;
}
