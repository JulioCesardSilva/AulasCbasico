#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

typedef struct data{// typedef para simplificar o programa sem precisar escrever struct em todas linhas
    int dia;
    int mes;
    int ano;
}data;

struct aluno{
    int id;
    string nome[255];
    data nascimento;
    };
