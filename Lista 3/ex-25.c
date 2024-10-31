/*
Declare e inicialize uma estrutura para armazenar as informações de um aluno
(nome, matrícula, nota) e imprima seus valores.
*/

#include <stdio.h>

typedef struct
{
    char nome[50];
    int matricula;
    float nota;
} Aluno;

int main()
{
    Aluno aluno = {"Felipe Zanardi", 110206, 10};

    printf("Nome: %s\n"
           "Matricula: %d\n"
           "Nota: %.2f\n", aluno.nome, aluno.matricula, aluno.nota);

    return 0;
}
