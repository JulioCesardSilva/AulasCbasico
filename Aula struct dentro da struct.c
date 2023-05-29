#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data{// typedef para simplificar o programa sem precisar escrever struct em todas linhas
    int dia;
    int mes;
    int ano;
}data;

struct aluno{
    int id;
    char nome[255];
    data nascimento;
    };

int main(){
    struct aluno aluno1;

    printf("Digite o Id do aluno: ");
    scanf("%d", &aluno1.id);// ghravar dados dentro da struct

    strcpy(aluno1.nome, "Julio");
    aluno1.nascimento.dia = 27;
    aluno1.nascimento.mes = 07;
    aluno1.nascimento.ano = 1993;

    printf("\nO id do aluno: %d \nO Nome: %s \nSeu Nascimento: %d/%d/%d",aluno1.id, aluno1.nome, aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);

return 0;
}
