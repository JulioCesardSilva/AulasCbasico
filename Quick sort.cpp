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

void quick_sort(int vetor[num], int inicio, int fim){
    int esq, dir, aux, pivo, meio;

    esq = inicio;
    dir = fim;
    meio = (int) ((esq + dir)/2);
    pivo = vetor[meio];

    // primeiro la�o para continuar as ordena��es
    while(dir > esq){
        while(vetor[esq] < pivo){// para andar para o lado caso o vetor for menor que pivo
            esq = esq + 1;
        }
        while(vetor[dir] > pivo){
            dir = dir - 1;
        }
    if(esq <= dir){
        aux = vetor[esq];// salva o valor para realizar a troca e n�o se perder
        vetor[esq] = vetor[dir];//troca de valor para ordenar
        vetor[dir] = aux; // devolve o valor da troca slavo em auxiliar
        //move para o lado para continuar a ordena��o
        esq = esq + 1;
        dir = dir - 1;
    }
        imprimevetor(vetor);
    }// fecha todo o la�o principal

    //la�o para continuar as ordena��es
    if(inicio < dir){
        quick_sort(vetor, inicio, dir);
    }
    if(esq < fim){
        quick_sort(vetor, esq, fim);
    }

    }


int main(){
    int vetor[num] = {10,9,8,7,6,5,4,3,2,1};
    imprimevetor(vetor);

    quick_sort(vetor, 0, num);// posi��o do vetor para come��r, tamanho do vetor e o fim

    imprimevetor(vetor);
return 0;
}
