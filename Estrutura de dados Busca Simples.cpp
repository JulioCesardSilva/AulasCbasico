#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#define num 10
using namespace std;

// Função busca simples
int buscasimples(int vetor[num], int valorprocurado, int *posicao){//ponteiro para encontrar posicao na memoria na funca principal

   int cont;
    bool valorencontrado;

    for(cont = 0;cont < num; cont++){// percorando a lista e retornando o valor e a posicao na tela
        if(vetor[cont] == valorprocurado){
            //cout << "Valor encontrado na posicao: " << cont;// Primeira forma de busca
            valorencontrado = true;// segunda forma de busca
            *posicao = cont;
        }
   }
   if(valorencontrado){
      //cout << "Valor encontrado na posicao: " << posicao;// Segunda forma de retornar
      return 1;
   }else{
    //cout << "Valor nao Encontrado";
    return -1;
   }
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

    if(buscasimples(vetor, valorprocurado, &posicao) == 1){
        cout << "Valor encontrado na posicao: " << posicao;
    }else{
        cout << "Valor nao encontrado";
    }


return 0;
}
