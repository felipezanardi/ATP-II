/*
Resolva um problema de cadastro de livros utilizando estruturas.
*/

#include <stdio.h>

#define LIVROS 2 // define a quantidade de livros

typedef struct
{
    char titulo[50];
    char autor[50];
    int ano;
} cadastro;

int main()
{
    cadastro livro[LIVROS];

    for (int i=0; i<LIVROS; i++)
    {
        printf("Digite o titulo do %do livro: ", i+1);
        fgets(livro[i].titulo, 50, stdin);

        printf("Digite o nome do autor do %do livro: ", i+1);
        fgets(livro[i].autor, 50, stdin);

        printf("Digite a ano de lancamento do %do livro: ", i+1);
        scanf("%d", &livro[i].ano);

        fflush(stdin);
        printf("\n");
    }

    printf("Cadastro dos livros concluido\n");

    return 0;
}
