/*
Utilize a definição de tipos enumeráveis para representar os meses do ano e
imprima os valores.
*/

#include <stdio.h>

enum meses_ano
{
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
} meses;

int main()
{
    for (meses = JANEIRO; meses <= DEZEMBRO; meses++)
    {
        printf("%do mes: ", meses);

        switch(meses)
        {
            case JANEIRO:   printf("Janeiro\n");   break;
            case FEVEREIRO: printf("Fevereiro\n"); break;
            case MARCO:     printf("Marco\n");     break;
            case ABRIL:     printf("Abril\n");     break;
            case MAIO:      printf("Maio\n");      break;
            case JUNHO:     printf("Junho\n");     break;
            case JULHO:     printf("Julho\n");     break;
            case AGOSTO:    printf("Agosto\n");    break;
            case SETEMBRO:  printf("Setembro\n");  break;
            case OUTUBRO:   printf("Outubro\n");   break;
            case NOVEMBRO:  printf("Novembro\n");  break;
            case DEZEMBRO:  printf("Dezembro\n");  break;
        }
    }

    return 0;
}
