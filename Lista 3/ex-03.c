/*
Atribua os valores de uma estrutura para outra e imprima os valores da nova
estrutura.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char marca[20];
    char modelo[40];
    int ano;
} info_carro;

int main()
{
    info_carro carro1, carro2;

    strcpy(carro1.marca, "Porsche");
    strcpy(carro1.modelo, "Taycan");
    carro1.ano = 2019;

    carro2 = carro1;

    printf("Marca: %s\n"
           "Modelo: %s\n"
           "Ano: %d\n", carro2.marca, carro2.modelo, carro2.ano);

    return 0;
}
