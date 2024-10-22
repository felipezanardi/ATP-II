/*
Escreva um programa em C que declare um array de 8
números de ponto flutuante e use aritmética de ponteiros para calcular a média
dos valores.
*/

#include <stdio.h>

int main()
{
    float media = 0, array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    float *ptr = array;

    for (int i=0; i<8; i++)
    {
        media += *(ptr + i);
    }

    media /= 8;

    printf("Media: %f\n", media);

    return 0;
}
