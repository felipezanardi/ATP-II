/*
Escreva um programa em C que leia uma string e conte o número
de caracteres, palavras e linhas na string.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i, palavras = 1, linhas = 1;
    char string[100];

    printf("Digite algo: ");
    gets(string);

    for (i=0; i<100; i++)
    {
        if(string[i] == ' ' || string[i] == '\n')
        {
            palavras++;
        }

        if(string[i] == '\n')
        {
            linhas++;
        }
    }

    printf("String: %s\n"
           "Numero de caracteres: %d\n"
           "Palavras: %d\n"
           "Linhas: %d\n", string, strlen(string), palavras, linhas);
           
    return 0;
}
