/*
Atribua os valores de uma estrutura de endereço para outra e imprima os valores
da nova estrutura.
*/

#include <stdio.h>

typedef struct
{
    char nome[50];
    char email[70];
    char telefone[20];
} Contato;

int main()
{
    Contato ctt_antigo = {"Felipe Zanardi", "email@exemplo.com", "11 97000-4123"};

    Contato ctt_novo = ctt_antigo;

    printf("Nome: %s\n"
           "Email: %s\n"
           "Telefone: %s\n",
           ctt_novo.nome, ctt_novo.email, ctt_novo.telefone);

    return 0;
}
