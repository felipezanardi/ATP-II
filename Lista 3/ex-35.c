/*
Utilize a definição de tipos enumeráveis para representar as estações do ano e
imprima os valores.
*/

#include <stdio.h>

typedef enum
{
    VERAO = 1,
    OUTONO,
    INVERNO,
    PRIMAVERA
} estacoes_ano;

int main()
{
    estacoes_ano estacoes;

    for (estacoes = VERAO; estacoes <= PRIMAVERA; estacoes++)
    {
        printf("%da estacao do ano no Brasil: ", estacoes);

        switch(estacoes)
        {
            case VERAO:     printf("Verao\n");     break;
            case OUTONO:    printf("Outono\n");    break;
            case INVERNO:   printf("Inverno\n");   break;
            case PRIMAVERA: printf("Primavera\n"); break;
        }
    }

    return 0;
}

