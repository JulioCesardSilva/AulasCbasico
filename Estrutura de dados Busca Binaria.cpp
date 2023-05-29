#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#define num 10
using namespace std;

// Função busca simples
int buscabinaria(int vetor[num], int valorprocurado, int *posicao){//ponteiro para encontrar posicao na memoria na funca principal
    int esquerda = 0;//limite da busca iniciando pela esquerda
    int direita = num -1;// limite do fim da busca limite do vetor
    int meio;// posição de deslocamento do pivo de busca

    while(esquerda <= direita){
            meio = (esquerda + direita)/2;
    if(vetor[meio] == valorprocurado){
        *posicao = meio;
        return 1;
    }
    if(vetor[meio] < valorprocurado){//essa condição vai rodar ate que a busca encontre o valor por isso o while
        esquerda = meio + 1;
    }else{
        direita = meio - 1;
    }
    }
    //cout << "Valor nao Encontrado";
    return -1;
}

int imprimevetor (int vetor[num]){
    int cont;
                  cout << "Os valores da Tabela: ";
    for(cont = 0; cont < num; cont++){// percorrando  lista

        cout << vetor[cont] << " - ";
    }
                  }
int main(){
    int vetor[num] = {1,3,5,7,9,11,13,15,17,19};// declarando lista a ser buscada e auxiliares
    int cont, valorprocurado, posicao;
    // para criar ponteiro e encontra posicao na memoria
    imprimevetor(vetor);

    cout << "\nQual Valor voce procura: ";
    cin >> valorprocurado;

    if(buscabinaria(vetor, valorprocurado, &posicao) == 1){
        cout << "Valor encontrado na posicao: " << posicao;
    }else{
        cout << "Valor nao encontrado";
    }


return 0;
}
