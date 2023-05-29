#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#define num 10
using namespace std;

int imprimevetor (int vetor[num]){
    int cont;
                  cout << "Os valores da Fila: ";
    for(cont = 0; cont < num; cont++){// percorrando  lista

        cout << vetor[cont] << " - ";
        }
        cout << "\n";
}

int buble_sort(int vetor[num]){

    int compara1, compara2, aux;// declara varial auxiliar para não perder o valor da posição durante a troca


// primeiro valor sendo analisado esquerda
    for(compara1 = 0;compara1 < num;compara1 ++){
        for(compara2 = compara1 + 1;compara2 < num;compara2 ++){// segundo valor sendo analisado direita
            if(vetor[compara1] > vetor[compara2]){// comparando os valor para ordenar ordem crescende inverso para decrecente
                aux = vetor[compara1];
                vetor[compara1] = vetor[compara2];
                vetor[compara2] = aux;
            }

        }

    }
}

int main(){
    int vetor[num] = {10,30,50,40,60,70,100,90.80,20,0};
    imprimevetor(vetor);
    buble_sort(vetor);
    imprimevetor(vetor);
return 0;
}
