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
    string nome;
    data nascimento;
    };

int main(){
    aluno *aluno1 = new aluno[10];
    int cont, quantidade;

    cout << "Digite o Id: ";
    cin >> aluno1->id;
    cout << "Digite o Nome: ";
    cin >> aluno1->nome;
    cout << "Digite a data de nascimento: ";
    cin >> aluno1->nascimento.dia >> aluno1->nascimento.mes >> aluno1->nascimento.ano;

    cout << "\nO Id do Aluno: " << aluno1->id << "\nSeu Nome: " << aluno1->nome << " \nData de Nascimento: " << aluno1->nascimento.dia << " " << aluno1->nascimento.mes << " " << aluno1->nascimento.ano;

    // usando for
    cout << "\n\n\nDigite o Numero de Alunos: ";
    cin >> quantidade;

    for(cont = 0; cont < quantidade; cont++){
        cout << "Digite o Id: ";
    cin >> aluno1[cont].id;
    cout << "Digite o Nome: ";
    cin >> aluno1[cont].nome;};
    for(cont = 0; cont < quantidade; cont++){
        cout << "\nO Id do Aluno: " << aluno1[cont].id << "\nSeu Nome: " << aluno1[cont].nome;

    }



    return 0;

}
