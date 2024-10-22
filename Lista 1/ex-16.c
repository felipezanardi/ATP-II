/*
Escreva um programa em C que declare um array de 10
caracteres e use um ponteiro para contar quantos desses caracteres são letras
maiúsculas.
*/

#include <stdio.h>

void imprimir_array(char array[]);

int main()
{
    char array[10] = {'a', 'b', 'C', 'd', 'E', 'F', 'g', 'H', 'i', 'J'};
    char *ptr = array;

    int maiusculas = 0;

    printf("Elementos do array:");
    imprimir_array(array);

    // contar letras maiusculas
    for (int i=0; i<10; i++)
    {
        if (*(ptr + i) >= 'A' && *(ptr + i) <= 'Z')
        {
            maiusculas++;
        }
    }

    printf("Letras maiusculas: %d\n", maiusculas);

    return 0;
}

void imprimir_array(char array[])
{
    for (int i=0; i<10; i++)
    {
        printf(" %c", array[i]);
    }
    printf("\n");
}
