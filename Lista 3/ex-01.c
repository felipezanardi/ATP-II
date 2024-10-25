/*
Declare e inicialize uma estrutura para armazenar as informações de um livro
(tíıtulo, autor, ano de publicação) e imprima seus valores.
*/

#include <stdio.h>

struct dados_livro
{
    char titulo[50];
    char autor[50];
    int ano;
} livro;

int main()
{
    printf("Digite o titulo do livro: ");
    fgets(livro.titulo, 50, stdin);

    printf("Digite o nome do autor: ");
    fgets(livro.autor, 50, stdin);

    printf("Digite o ano de publicacao: ");
    scanf("%d", &livro.ano);

    printf("\nTitulo do livro: %s"
           "Nome do autor: %s"
           "Ano de publicacao: %d\n", livro.titulo, livro.autor, livro.ano);

    return 0;
}
