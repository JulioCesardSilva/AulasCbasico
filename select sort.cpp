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

int selection_sort(int vetor[num]){
    int menorvalor, aux, l1, l2;

    for(l1 = 0; l1 < num; l1 ++){// priemiro la�o percorre todo o algoritmo la�o externo
        menorvalor = l1;// recebe a posi��o inicial para o menor valor
        for(l2 = l1 + 1; l2 < num; l2 ++){// segundo la�o analisa os elementos a frente
                if(vetor[l2] < vetor[menorvalor]){//caso ele encontre um vetor de menor valor
                    menorvalor = l2;
                }
        }// encerra la�o interno
        if(menorvalor != l1){// apos encontra o menor valor fazer substitui��o e retornar ao la�� externo
            aux = vetor[l1];// grava valor do vetor l1 para nao se perder durante a troca
            vetor[l1] = vetor[menorvalor]; // troca o valor da posi��o l1 pelo menor valor achado durante o la�o interno
            vetor[menorvalor] = aux;
            imprimevetor(vetor);
        }

    }
}

int main(){
    int vetor[num] = {10,30,50,40,60,70,100,90.80,20,0};
    imprimevetor(vetor);

    selection_sort(vetor);

    imprimevetor(vetor);
return 0;
}

