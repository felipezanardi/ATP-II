/*
Declare e inicialize uma união para armazenar um valor inteiro ou um valor
flutuante e imprima seus valores.
*/

#include <stdio.h>

typedef union
{
    int inteiro;
    float flutuante;
} intfloat;

int main()
{
    intfloat valor;

    valor.inteiro = 2;
    printf("Valor inteiro: %d\n", valor.inteiro);

    valor.flutuante = 3.1;
    printf("Valor flutuante: %f\n", valor.flutuante);

    return 0;
}
