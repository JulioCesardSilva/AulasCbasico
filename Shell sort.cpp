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

int shell_sort(int vetor[num]){
    int i, j, atual;//a variavel i começa o laço pelo proximo valor depois de 0
    int h = 1;// valor de casas para fazer comparações

    while(h < num){// de quanto em quanto seram as casas para comparar
        h = 3*h + 1;// o numro de casa e escolha do programador dependendo da lista nesse caso escolhemos 3
    }
    while(h > 1){// para diminuir as casas de comparação entre as analises caminhando para o fim da ordenação
       h = h/3;

    for(i = h; i < num; i ++){
        atual = vetor[i];// elemento atual em analise
        j = i - h;// elemento anterior ao analisado
        while((j >= 0) && (atual < vetor[j])){// analisando membros anteriores
            vetor[j + h] = vetor[j];// posicionando os elementos na posição da frente

            j = j - h;//faz o j andar para traz
    }
        vetor[j + h] = atual;
    }
    }
}

int main(){
    int vetor[num] = {10,9,8,7,6,5,4,3,2,1};
    imprimevetor(vetor);

    shell_sort(vetor);

    imprimevetor(vetor);

return 0;
}
