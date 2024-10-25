/*
Acesse os componentes de uma estrutura de aluno (nome, matrícula, nota)
utilizando o operador ponto '.' e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    char nome[50];
    int matricula;
    float nota;
} dados_aluno;

int main()
{
    dados_aluno aluno;

    printf("Nome do aluno: ");
    fgets(aluno.nome, 50, stdin);

    printf("Matricula do aluno: ");
    scanf("%d", &aluno.matricula);

    printf("Nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("\nNome: %s"
           "Matricula: %d\n"
           "Nota: %.2f\n", aluno.nome, aluno.matricula, aluno.nota);

    return 0;
}
