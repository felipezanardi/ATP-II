/*
Escreva um programa em C que leia uma string e verifique
se ela é um palíndromo.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int eh_palindromo = 1;
    char string[50];

    printf("Digite uma palavra: ");
    gets(string);

    int tamanho = strlen(string);

    for (int i=0; i<tamanho; i++)
    {
        if (string[i] != string[tamanho-1-i] && eh_palindromo == 1)
        {
            eh_palindromo = 0;
            break;
        }
    }

    if (eh_palindromo)
    {
        printf("String eh palindromo\n");
    }
    else
    {
        printf("String nao eh palindromo\n");
    }

    return 0;
}
