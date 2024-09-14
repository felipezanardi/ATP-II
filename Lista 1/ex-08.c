/*
Escreva um programa em C que leia 8 caracteres e verifique
quantos são vogais.
*/

#include <stdio.h>

int main()
{
    char letra;
    int vogal=0, i;

    for (i=0; i<8; i++)
    {
        printf("Digite o %do caracter: ", i+1);
        scanf("%c",&letra);
        fflush(stdin);

        switch(letra)
        {
            case 'a':case 'e':case 'i':case 'o':case 'u':
            case 'A':case 'E':case 'I':case 'O':case 'U':
                vogal++;
                break;

            default:
                break;
        }
    }

    printf("Vogais: %d\n", vogal);

    return 0;
}
