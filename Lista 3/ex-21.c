/*
Utilize o operador sizeof() para determinar o tamanho de uma estrutura de
produto (nome, código, preço) e imprima o resultado.
*/

#include <stdio.h>

typedef struct
{
    char nome[50];
    int codigo;
    float preco;
} Produto;

int main()
{
    printf("Tamanho da estrutura: %d bytes\n", sizeof(Produto));

    return 0;
}
