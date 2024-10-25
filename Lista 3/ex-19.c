/*
Crie uma função que recebe uma estrutura de carro (marca, modelo, ano) como
parâmetro e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    char marca[20];
    char modelo[40];
    int ano;
} info_carro;

void imprimir(info_carro x);

int main()
{
    info_carro carro = {"Porsche", "Taycan", 2019};

    imprimir(carro);

    return 0;
}

void imprimir(info_carro x)
{
    printf("Marca: %s\n"
           "Modelo: %s\n"
           "Ano: %d\n", x.marca, x.modelo, x.ano);
}
