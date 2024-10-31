/*
Acesse os componentes de uma estrutura de aluno (nome, matrícula, nota)
utilizando o operador "->" e imprima seus valores.
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
    dados_aluno aluno = {"Felipe Zanardi", 110206, 9.5};
    dados_aluno *ptr = &aluno;

    printf("Nome do aluno: %s\n"
           "Matricula do aluno: %d\n"
           "Nota do aluno: %.2f\n", ptr->nome, ptr->matricula, ptr->nota);

    return 0;
}
