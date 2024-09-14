/*
Escreva um programa em C que declare um array de 10 caracteres
e use um ponteiro para contar quantos desses caracteres são letras
maiúsculas.
*/

#include <stdio.h>

int main()
{
    char array[10] = {'a', 'b', 'C', 'd', 'E', 'F', 'g', 'H', 'i', 'J'};
    char *ponteiro = &array;

    int i, c_maiusculos=0;

    printf("Elementos da array:\n");

    for (int i=0; i<10; i++)
    {
        printf("%c ", array[i]);
        
        if(*(ponteiro+i) >= 'A' && *(ponteiro+i) <= 'Z')
        {
            c_maiusculos++;
        }
    }

    printf("\nCaracteres maiusculos: %d\n", c_maiusculos);

    return 0;
}
