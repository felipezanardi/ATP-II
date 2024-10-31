/*
Declare e inicialize uma estrutura aninhada para armazenar as informações de
um ponto (x, y, z) e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    struct
    {
        float x;
        float y;
        float z;
    } coordenadas;
} Ponto;

int main()
{
    Ponto ponto = {1.1, 1.7, 2.3};

    printf("Coordenadas do ponto:\n"
           "X: %.2f\n"
           "Y: %.2f\n"
           "Z: %.2f\n",
           ponto.coordenadas.x, ponto.coordenadas.y, ponto.coordenadas.z);

    return 0;
}
