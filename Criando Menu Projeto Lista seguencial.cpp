#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <new>
#include <ctime>
#define num 10
using namespace std;

/*int* alocavetorcplusplus(int tamanho){
    int *v;// ponteiro auxiliar

    v = new int[tamanho];
return v;
}*/
//estrutura lista seguncial
int time(){}


struct pessoa{
    string pessoa;
    int rg;
};

// função imprime vetor
void imprimevetor(pessoa *ponteirolista, int tamanhodalista){
    int cont;
    for(cont = 0; cont < tamanhodalista; cont++){
        cout << cont << " - " <<ponteirolista[cont].pessoa << " - " << ponteirolista[cont].rg << "\n";
    }
}

void adciniciolista(pessoa *&ponteirolista, int *tamanhodalista, string nome, int rg){
    if(*tamanhodalista == 0){// se a lista for vazia cria outra lsita
            pessoa *exemplolista = new pessoa [1];
            exemplolista[0].pessoa = nome;
            exemplolista[0].rg = rg;

            ponteirolista = exemplolista;
    }else{// caso a lista ja tenha membro adiciona no inicio dela
    pessoa *exemplolista = new pessoa [*tamanhodalista + 1];

        // adcionar o primeiro novo elemento
        exemplolista[0].pessoa = nome;
        exemplolista[0].rg = rg;

// passa o elemento do vetor antigo para o novo
    for(int cont = 0; cont < *tamanhodalista; cont++){
        exemplolista[cont + 1].pessoa = ponteirolista[cont].pessoa;
        exemplolista[cont + 1].rg = ponteirolista[cont].rg;
    }
    ponteirolista = exemplolista;//atualiza o ponteiro para o novo
    }
//aumentando o tamnho da lista
    *tamanhodalista = *tamanhodalista + 1;

}

void adcfimlista(pessoa *&ponteirolista, int *tamanhodalista, string nome, int rg){
    pessoa *exemplolista = new pessoa [*tamanhodalista + 1];//criando nova lista com uma posição a mais

   for(int cont = 0; cont < *tamanhodalista; cont++){// passando valores da lsita antiga para nova
        exemplolista[cont].pessoa = ponteirolista[cont].pessoa;
        exemplolista[cont].rg = ponteirolista[cont].rg;
    }
    //posiciona o ultimo elemento da seguinte forma ele pega o tamanho da lista antiga e que tem o valor exato da ultima posição para inserir os dados
    exemplolista[*tamanhodalista].pessoa = nome;
    exemplolista[*tamanhodalista].rg = rg;

    // atualiza o ponteiro para a lista nova
    ponteirolista = exemplolista;

 //aumentando o tamnho da lista
    *tamanhodalista = *tamanhodalista + 1;

}

void adcposicao(pessoa *&ponteirolista, int *tamanhodalista, string nome, int rg, int posicao){
    pessoa *exemplolista = new pessoa [*tamanhodalista + 1];//criando nova lista com uma posição a mais

   for(int cont = 0; cont < posicao; cont++){// passando valores da lsita antiga para nova
        exemplolista[cont].pessoa = ponteirolista[cont].pessoa;
        exemplolista[cont].rg = ponteirolista[cont].rg;
    }
    //passa valor para posicao escolhida
    exemplolista[posicao].pessoa = nome;
    exemplolista[posicao].rg = rg;


// reposiciona os valores do vetor antigo
    for(int cont = posicao + 1; cont < *tamanhodalista + 1; cont++){//tamanho da lsita recebe mais um posicao a lsita aumentou quando recebeu o valor
        exemplolista[cont].pessoa = ponteirolista[cont - 1].pessoa;//cont - 1 por que a lista antiga tem um numero de vetores menor que a nova
        exemplolista[cont].rg = ponteirolista[cont - 1].rg;
    }
    ponteirolista = exemplolista;

    *tamanhodalista = *tamanhodalista + 1;
}

void removedoinicio(pessoa *&ponteirolista, int *tamanhodalista){
    pessoa *exemplolista = new pessoa[*tamanhodalista - 1]; // o tamanho da nova lista deve ser menor quando se remove

    for(int cont = 1; cont < *tamanhodalista; cont++){// conte começa em 1 para remover o primeiro falar da lista na posição 0
        exemplolista[cont - 1].pessoa = ponteirolista[cont].pessoa;
        exemplolista[cont - 1].rg = ponteirolista[cont].rg;
    }
    ponteirolista = exemplolista;

    *tamanhodalista = *tamanhodalista - 1;//diminui o tamanho da lista quando remove valores

}

void removedofinal(pessoa *&ponteirolista, int *tamanhodalista){
    pessoa *exemplolista = new pessoa[*tamanhodalista - 1]; // o tamanho da nova lista deve ser menor quando se remove

    for(int cont = 0; cont < *tamanhodalista - 1; cont++){// conte começa em 1 para remover o primeiro falar da lista na posição 0
        exemplolista[cont].pessoa = ponteirolista[cont].pessoa;
        exemplolista[cont].rg = ponteirolista[cont].rg;
    }
    ponteirolista = exemplolista;

    *tamanhodalista = *tamanhodalista - 1;//diminui o tamanho da lista quando remove valores

}

void removedaposicao(pessoa *&ponteirolista, int *tamanhodalista, int posicao){
    pessoa *exemplolista = new pessoa[*tamanhodalista - 1];

    int cont;
    for(cont = 0; cont < *tamanhodalista - 1; cont++){
    if(cont < posicao){// se o cont for menor que a posiçao adiciona os valores a lista se nao pela a posica e adciona os restantes
        exemplolista[cont].pessoa = ponteirolista[cont].pessoa;
        exemplolista[cont].rg = ponteirolista[cont].rg;
    }else{
        exemplolista[cont].pessoa = ponteirolista[cont + 1].pessoa;// acrecenta mais um para pular a posicao que deseja remover da lsita
        exemplolista[cont].rg = ponteirolista[cont + 1].rg;
    }
    }
    ponteirolista = exemplolista;

    *tamanhodalista = *tamanhodalista - 1;//diminui o tamanho da lista quando remove valores

}

string buscaporrg(pessoa *&ponteirolista, int *tamanholista, int rg){
    int cont;
    string nome = "Nao encontrado";//caso nao ache o nome ele retorna esse valor

    for(cont = 0;cont < *tamanholista;cont++){
        if(ponteirolista[cont].rg == rg){
            nome = ponteirolista[cont].pessoa;
        }
    }
    return nome;
}

int main(){
    pessoa *ponteirolista; // ponteiro para lista seguencial e tipo de variavel pessoa formada na struct
    int tamanhodalista = 0;
    int cont;
    int *vetorcplusplus;

    /*cout << "Qual o Tamanho da lista desejado: ";
    cin >> tamanhodalista;

    vetorcplusplus = alocavetorcplusplus(tamanhodalista);*/
    pessoa *lista = new pessoa[tamanhodalista];/*

    for(cont = 0; cont < tamanhodalista; cont++){
        cout << "digite Nome " << cont + 1 << ": ";
        cin >> exemplolista[cont].pessoa;
        cout << "Digite RG " << cont + 1 << ": ";
        cin >> exemplolista[cont].rg;
    }*/
    ponteirolista = lista;


    int opcaodesejada = 0;

    while(opcaodesejada < 9 && opcaodesejada >= 0){



    cout << "\nOperacoes!\n";
    cout << "1 - Adcionar dados no inicio da lista\n";
    cout << "2 - Adcionar dados no fim da lista\n";
    cout << "3 - Adcionar dados na posicao desejada da lista\n";
    cout << "4 - remover dados no inicio da lista\n";
    cout << "5 - remover dados no fim da lista\n";
    cout << "6 - remover dados na posicao desejada da lista\n";
    cout << "7 - procurar dados na lista com RG\n";
    cout << "8 - Exibir a Lista e Salvar\n";
    cout << "9 - Sair do sistema\n";
    cout << "Digite a Opcao e aperte ENTER: ";
    cin >> opcaodesejada;
    system("cls");

    //declarando variasveis de apoio
    string nome;
    int rg, posicao;

    switch(opcaodesejada){
        case 1:
        cout << "Adcionar dados no inicio da lista\n\n";

        cout << "digite Nome " << ": ";
        cin >> nome;
        cout << "Digite RG " << ": ";
        cin >> rg;

        adciniciolista(ponteirolista, &tamanhodalista, nome, rg);
        system("cls");
break;
        case 2:
        cout << "Adcionar dados no fim da lista\n\n";

        cout << "digite Nome " << ": ";
        cin >> nome;
        cout << "Digite RG " << ": ";
        cin >> rg;

        if(tamanhodalista == 0){
           adciniciolista(ponteirolista, &tamanhodalista, nome, rg);
        }else{
           adcfimlista(ponteirolista, &tamanhodalista, nome, rg);
        }
        system("cls");
break;
        case 3:
        cout << "Adcionar dados em qual Posicao: ";
        cin >> posicao;

        cout << "digite Nome " << ": ";
        cin >> nome;
        cout << "Digite RG " << ": ";
        cin >> rg;

        if(posicao == 0){
            adciniciolista(ponteirolista, &tamanhodalista, nome, rg);
        }else if(posicao == tamanhodalista){
            adcfimlista(ponteirolista, &tamanhodalista, nome, rg);
        }else{
            adcposicao(ponteirolista, &tamanhodalista, nome, rg, posicao);
        }
        system("cls");
break;
        case 4:
        cout << "Remover dados no Inicio da Lista\n\n";
        if(tamanhodalista == 0){
            cout << "Lista vazia!";
        }else{
            removedoinicio(ponteirolista, &tamanhodalista);
        }
        system("cls");
break;
        case 5:
        cout << "Remover dados no Fim da Lista\n\n";
        if(tamanhodalista == 0){
            cout << "Lista Vazia!";
        }else{
        removedofinal(ponteirolista, &tamanhodalista);
        }
        system("cls");
break;
        case 6:
        cout << "Qual posicao deseja remover dados:\n\n";
        cin >> posicao;
        if(tamanhodalista == 0){
            cout << "Lista Vazia!";
        }else if( posicao == 0){
        removedoinicio(ponteirolista, &tamanhodalista);
        }else if(posicao == tamanhodalista){
        removedofinal(ponteirolista, &tamanhodalista);
        }else{
        removedaposicao(ponteirolista, &tamanhodalista, posicao);
        }
        system("cls");
break;
        case 7:
        cout << "Por favor digite o RG: ";
        cin >> rg;

        cout << "\nFoi Localizado no RG " << rg << ": " << buscaporrg(ponteirolista, &tamanhodalista, rg) << "\n";
        system("cls");
break;
        case 8:

        time_t timer;
        struct tm *horarioLocal;


        time(&timer); // Obtem informações de data e hora
        horarioLocal = localtime(&timer);

        int dia = horarioLocal->tm_mday;
        int mes = horarioLocal->tm_mon + 1;
        int ano = horarioLocal->tm_year + 1900;
        cout << "Data: " << dia  << "/" << mes << "/" << ano << "\n" << endl;
        imprimevetor(ponteirolista, tamanhodalista);

        ofstream arquivosaida;//cria objeto e arquivo

        arquivosaida.open("Log.txt", std::ios_base::app);// abri o arquivo ou cria se nao existir
        arquivosaida << "\n";
        arquivosaida << "Data: " << dia  << "/" << mes << "/" << ano << endl;

        int cont;
        for(cont = 0; cont < tamanhodalista; cont++){
        arquivosaida << cont << " - " <<ponteirolista[cont].pessoa << " - " << ponteirolista[cont].rg << "\n";
    }

        //escreve dentro do arquivo

        arquivosaida.close();//fecha o arquivo


break;

    }
    }
return 0;

}
