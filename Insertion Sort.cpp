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

int insertion_sort(int vetor[num]){
    int i, j, atual;// a variavel i começa o laço pelo proximo valor depois de 0

    for(i = 1; i < num; i ++){
        atual = vetor[i];// elemento atual em analise
        j = i - 1;// elemento anterior ao analisado
        while((j >= 0) && (atual < vetor[j])){// analisando membros anteriores
            vetor[j + 1] = vetor[j];// posicionando os elementos na posição da frente

            j = j - 1;//faz o j andar para traz
        }
    vetor[j + 1] = atual;// apos o espaço estar aberto coloca o atual menor numero na posição ordenada
    imprimevetor(vetor);
    }

}

int main(){
    int vetor[num] = {10,9,8,7,6,5,4,3,2,1};
    imprimevetor(vetor);

    insertion_sort(vetor);

    imprimevetor(vetor);

return 0;
}
