/*
Escreva um programa em C que leia uma string e verifique
se ela é um palíndromo.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i, eh_palindromo = 1, tamanho;
    char string[50];

    printf("Digite uma palavra: ");
    gets(string);

    tamanho = strlen(string);

    for (i=0; i<tamanho; i++)
    {
        if(string[0+i] != string[tamanho-1-i] && eh_palindromo == 1)
        {
            eh_palindromo = 0;
        }
    }

    if (eh_palindromo == 1)
    {
        printf("String e palindromo\n");
    }
    else if(eh_palindromo == 0)
    {
        printf("String nao e palindromo\n");
    }
    
    return 0;
}
