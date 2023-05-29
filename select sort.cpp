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

    for(l1 = 0; l1 < num; l1 ++){// priemiro laço percorre todo o algoritmo laço externo
        menorvalor = l1;// recebe a posição inicial para o menor valor
        for(l2 = l1 + 1; l2 < num; l2 ++){// segundo laço analisa os elementos a frente
                if(vetor[l2] < vetor[menorvalor]){//caso ele encontre um vetor de menor valor
                    menorvalor = l2;
                }
        }// encerra laço interno
        if(menorvalor != l1){// apos encontra o menor valor fazer substituição e retornar ao laçõ externo
            aux = vetor[l1];// grava valor do vetor l1 para nao se perder durante a troca
            vetor[l1] = vetor[menorvalor]; // troca o valor da posição l1 pelo menor valor achado durante o laço interno
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

