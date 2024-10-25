/*
Utilize a definição de tipos enumeráveis para representar os dias da semana e
imprima os valores.
*/

#include <stdio.h>

enum dias_semana
{
    DOMINGO = 1,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
} dias;

int main()
{
    for (dias = DOMINGO; dias <= SABADO; dias++)
    {
        printf("%do dia da semana: ", dias);

        switch(dias)
        {
            case DOMINGO: printf("Domingo\n"); break;
            case SEGUNDA: printf("Segunda\n"); break;
            case TERCA:   printf("Terca\n");   break;
            case QUARTA:  printf("Quarta\n");  break;
            case QUINTA:  printf("Quinta\n");  break;
            case SEXTA:   printf("Sexta\n");   break;
            case SABADO:  printf("Sabado\n");  break;
        }
    }

    return 0;
}
