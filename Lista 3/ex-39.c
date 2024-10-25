/*
Atribua os valores de uma estrutura de produto para outra e imprima os valores
da nova estrutura.
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
    Produto produto_1 = {"Mouse", 123, 499.99};
    Produto produto_2 = produto_1;

    printf("Nome: %s\n"
           "Codigo: %d\n"
           "Preco: R$%.2f\n",
           produto_2.nome, produto_2.codigo, produto_2.preco);

    return 0;
}
