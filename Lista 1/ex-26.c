/*
Escreva um programa em C que leia duas strings e concateneas.
Imprima a string resultante.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string_1[50], string_2[50];

    printf("Digite uma palavra: ");
    gets(string_1);

    printf("Digite uma palavra novamente: ");
    gets(string_2);

    printf("String: %s\n", strcat(string_1, string_2));
    
    return 0;
}
