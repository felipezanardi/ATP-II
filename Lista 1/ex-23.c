/*
Escreva um programa em C que determine se um array de
10 inteiros é simétrico (um palíndromo).
*/

#include <stdio.h>

int main()
{
    int i, eh_palindromo = 1;
    int array[10] = {2, 8, 3, 5, 4, 4, 5, 3, 8, 2};

    printf("Elementos do array:");

    for (i=0; i<10; i++)
    {
        printf(" %d", array[i]);
    }
    printf("\n");

    for (i=0; i<10; i++)
    {
        if (array[0+i] != array[9-i] && eh_palindromo == 1)
        {
            eh_palindromo = 0;
            break;
        }
    }

    // (condição) ? se_verdadeiro : se_falso;
    (eh_palindromo) ? printf("Eh um palindromo\n") : printf("Nao eh um palindromo\n");

    return 0;
}
