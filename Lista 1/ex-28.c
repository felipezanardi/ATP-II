/*
Escreva um programa em C que leia uma string e substitua
todas as ocorrências de um caractere por outro.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[50], caractere, substitui;

    printf("Digite uma palavra: ");
    gets(string);

    printf("Caractere que deseja trocar: ");
    scanf("%c", &caractere);
    fflush(stdin);

    printf("Caractere que ira substituir: ");
    scanf("%c", &substitui);

    for (int i=0; i<strlen(string); i++)
    {
        if(string[i] == caractere)
        {
            string[i] = substitui;
        }
    }

    printf("String modificada: %s\n", string);
    
    return 0;
}
