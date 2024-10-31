/*
Declare e inicialize uma união para armazenar um valor double ou um valor
char e imprima seus valores.
*/

#include <stdio.h>

typedef union
{
    double doub;
    char caractere;
} doublechar;

int main()
{
    doublechar valor;

    valor.doub = 3242.312;
    printf("Valor double: %lf\n", valor.doub);

    valor.caractere = 'A';
    printf("Valor char: %c\n", valor.caractere);

    return 0;
}
