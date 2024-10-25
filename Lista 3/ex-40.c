/*
Acesse os componentes de uma estrutura de ponto (x, y, z) utilizando o operador
ponto '.' e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    float x;
    float y;
    float z;
} coordenadas;

int main()
{
    coordenadas ponto = {1.1, 1.7, 2.3};

    printf("Coordenadas do ponto:\n"
           "X: %.2f\n"
           "Y: %.2f\n"
           "Z: %.2f\n",
           ponto.x, ponto.y, ponto.z);

    return 0;
}
