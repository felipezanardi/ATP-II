/*
Crie uma função que recebe uma estrutura de aluno (nome, matrícula, nota)
como parâmetro e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    char nome[50];
    int matricula;
    float nota;
} dados_aluno;

void imprimir(dados_aluno x);

int main()
{
    dados_aluno aluno;

    printf("Nome do aluno: ");
    fgets(aluno.nome, 50, stdin);

    printf("Matricula do aluno: ");
    scanf("%d", &aluno.matricula);

    printf("Nota do aluno: ");
    scanf("%f", &aluno.nota);

    imprimir(aluno);

    return 0;
}

void imprimir(dados_aluno x)
{
    printf("\nNome: %s"
           "Matricula: %d\n"
           "Nota: %.2f\n", x.nome, x.matricula, x.nota);
}
