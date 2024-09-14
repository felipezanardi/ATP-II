/*
Escreva um programa em C que declare um array de 8
números de ponto flutuante e use aritmética de ponteiros para calcular a média
dos valores.
*/

#include <stdio.h>

int main()
{
    float array[8] = {1.5, 2.5, 3, 4, 5, 6, 7.5, 8.5};
    float *ponteiro = array;
    float soma = 0, media;

    printf("Elementos da array inicial:\n");

    for (int i=0; i<8; i++)
    {
        printf("%.2f ", array[i]);
    }

    for (int i=0; i<8; i++)
    {
        soma += *(ponteiro+i);
    }

    media = soma/8;

    printf("\nMedia: %.2f\n", media);
    
    return 0;
}
