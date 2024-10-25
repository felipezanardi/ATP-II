/*
Acesse os componentes de uma estrutura de filme (título, diretor, ano de lançamento)
utilizando o operador ponto '.' e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    char titulo[100];
    char diretor[50];
    int ano;
} tFilme;

int main()
{
    tFilme filme;

    printf("Digite o titulo do filme: ");
    fgets(filme.titulo, 100, stdin);

    printf("Digite o nome do diretor do filme: ");
    fgets(filme.diretor, 50, stdin);

    printf("Digite o ano de lancamento do filme: ");
    scanf("%d", &filme.ano);

    printf("\nTitulo do filme: %s"
           "Diretor do filme: %s"
           "Ano de lancamento: %d\n",
           filme.titulo, filme.diretor, filme.ano);

    return 0;
}
