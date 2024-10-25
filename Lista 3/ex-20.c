/*
Declare um arranjo de estruturas para armazenar as informações de 3 livros
(título, autor, ano de publicação) e imprima seus valores.
*/

#include <stdio.h>

#define QTD 3 // quantidade de livros

typedef struct
{
    char titulo[100];
    char autor[50];
    int ano;
} Livro;

void imprimir(Livro x);

int main()
{
    Livro livros[QTD];

    for (int i=0; i<QTD; i++)
    {
        printf("Titulo do %do livro: ", i+1);
        fgets(livros[i].titulo, 100, stdin);

        printf("Nome do autor do %do livro: ", i+1);
        fgets(livros[i].autor, 50, stdin);

        printf("Ano de publicacao do %do livro: ", i+1);
        scanf("%d", &livros[i].ano);

        fflush(stdin);
        printf("\n");
    }

    for (int i=0; i<QTD; i++)
    {
        printf("\nLivro %d:\n", i+1);
        imprimir(livros[i]);
    }

    return 0;
}

void imprimir(Livro x)
{
    printf("- Titulo: %s"
           "- Autor: %s"
           "- Ano: %d\n", x.titulo, x.autor, x.ano);
}
