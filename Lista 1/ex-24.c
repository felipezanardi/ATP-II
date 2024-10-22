/*
Escreva um programa em C que verifique se todos os
elementos de um array de 5 inteiros são positivos.
*/

#include <stdio.h>

int main()
{
    int sao_positivos = 1;
    int array[5] = {2, 8, 0, -5, -4};

    printf("Elementos do array:");

    for (int i=0; i<5; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");

    for (int i=0; i<5; i++)
    {
        if (array[i] < 0 && sao_positivos == 1)
        {
            sao_positivos = 0;
            break;
        }
    }

    if (sao_positivos)
    {
        printf("Todos os 5 elementos sao positivos\n");
    }
    else
    {
        printf("Nem todos os 5 elementos sao positivos\n");
    }

    return 0;
}
