/*
Declare um arranjo de estruturas para armazenar as informações de 4 produtos
(nome, código, preço) e imprima seus valores.
*/

#include <stdio.h>

#define QTD 4 // quantidade de produtos

typedef struct
{
    char nome[50];
    int codigo;
    float preco;
} produto;

void imprimir(produto x);

int main()
{
    produto produtos[QTD];

    for (int i=0; i<QTD; i++)
    {
        printf("Nome do %do produto: ", i+1);
        fgets(produtos[i].nome, 50, stdin);

        printf("Codigo do %do produto: ", i+1);
        scanf("%d", &produtos[i].codigo);

        printf("Preco do %do produto: R$", i+1);
        scanf("%f", &produtos[i].preco);

        fflush(stdin);
        printf("\n");
    }

    for (int i=0; i<QTD; i++)
    {
        printf("\nProduto %d:\n", i+1);
        imprimir(produtos[i]);
    }

    return 0;
}

void imprimir(produto x)
{
    printf("- Nome: %s"
           "- Codigo: %d\n"
           "- Preco: R$%.2f\n", x.nome, x.codigo, x.preco);
}
