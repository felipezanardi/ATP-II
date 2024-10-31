/*
Declare e inicialize uma estrutura aninhada para armazenar as informações de
uma data (dia, mês, ano) e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} data;

typedef struct
{
    char nome[50];
    data nascimento;
} cadastro;

int main()
{
    cadastro pessoa;

    printf("Nome: ");
    fgets(pessoa.nome, 50, stdin);

    printf("Dia de nascimento: ");
    scanf("%d", &pessoa.nascimento.dia);

    printf("Mes de nascimento (1-12): ");
    scanf("%d", &pessoa.nascimento.mes);

    printf("Ano de nascimento: ");
    scanf("%d", &pessoa.nascimento.ano);

    printf("\nNome: %s"
           "Data de nascimento: %d / %d / %d\n",
           pessoa.nome, pessoa.nascimento.dia, pessoa.nascimento.mes, pessoa.nascimento.ano);

    return 0;
}
