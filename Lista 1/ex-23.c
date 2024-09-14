/*
Escreva um programa em C que determine se um array de
10 inteiros é simétrico (um palíndromo).
*/

#include <stdio.h>

int main()
{
    int i, eh_palindromo = 1;
    int array[10] = {2, 8, 3, 5, 4, 4, 5, 3, 8, 2};

    printf("Elementos da array inicial:\n");

    for (i=0; i<10; i++)
    {
        printf("%d ", array[i]);
    }

    for (i=0; i<10; i++)
    {
        if(array[0+i] != array[9-i] && eh_palindromo == 1)
        {
            eh_palindromo = 0;
        }
    }

    if(eh_palindromo == 1)
    {
        printf("\nA array e um palindromo\n");
    }
    else if(eh_palindromo == 0)
    {
        printf("\nA array nao e um palindromo\n");
    }
    
    return 0;
}
