/*
Declare e inicialize uma união para armazenar um valor char ou um valor inteiro
e imprima seus valores.
*/

#include <stdio.h>

typedef union
{
    char caractere;
    int inteiro;
} intchar;

int main()
{
    intchar valor;

    valor.caractere = 'A';
    printf("Valor char: %c\n", valor.caractere);

    valor.inteiro = 2;
    printf("Valor inteiro: %d\n", valor.inteiro);

    return 0;
}
