#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{ //criando estruturas de variaveis
    int idade;
    char nome[255];
};

int main(){
    struct pessoa variavel;

    variavel.idade = 28;
    strcpy(variavel.nome, "Julio");// strcpy para fazer uma copia de string2

    printf("\nA idade: %d \nO nome: %s",variavel.idade, variavel.nome);
    printf("\n\n");
    struct pessoa vetor[3];

    vetor[0].idade = 28;
    vetor[1].idade = 25;
    vetor[2].idade = 50;
    strcpy(vetor[0].nome, "Julio");
    strcpy(vetor[1].nome, "Joao");
    strcpy(vetor[2].nome, "Pedro");

    int cont;

    for(cont = 0; cont < 3; cont++){
       printf("\nA idade: %d O nome: %s",vetor[cont].idade, vetor[cont].nome);

    }


     return 0;
}
