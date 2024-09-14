/*
Escreva um programa em C que verifique se todos os ele-
mentos de um array de 5 inteiros são positivos.
*/

#include <stdio.h>

int main()
{
    int i, sao_positivos = 1;
    int array[5] = {2, 8, 0, -5, -4};

    printf("Elementos da array inicial:\n");

    for (i=0; i<5; i++)
    {
        printf("%d ", array[i]);
    }

    for (i=0; i<5; i++)
    {
        if(array[i] < 0 && sao_positivos == 1)
        {
            sao_positivos = 0;
        }
    }

    if(sao_positivos == 1)
    {
        printf("\nTodos os 5 elementos sao positivos\n");
    }
    else if(sao_positivos == 0)
    {
        printf("\nNem todos os 5 elementos sao positivos\n");
    }
    
    return 0;
}
