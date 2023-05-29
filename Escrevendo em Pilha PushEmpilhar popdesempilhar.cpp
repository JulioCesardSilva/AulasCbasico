#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#define num 10
using namespace std;

int imprimevetor (int vetor[num]){
    int cont;
                  cout << "Os valores da Tabela: ";
    for(cont = 0; cont < num; cont++){// percorrando  lista

        cout << vetor[cont] << " - ";
        }
        cout << "\n";
}

int pilhapush(int pilha[num], int valor, int *topo){// fun��o para empilhar uma pilha e ponteiro na variavel topo para mudar em todas fun��es
    if(*topo == num -1){
        cout << "Pilha Cheia!\n";
        }else{
        *topo = *topo + 1;// caso o topo nao estiver cheio ent�o topo come�a em -1 e acrescenta 1 para come�ar em posi��o 0
        pilha[*topo] = valor;// acrecentando valor a posi��o do topo
        }
}

int pilhapop(int pilha[num], int *topo){//fun��o desempilhar dados
    if(*topo == -1){// testa pilha para verificar se esta vazia
        cout << "Sua Pilha esta Vazia";
    }else{
        cout << "A valor removido e: " << pilha[*topo];// mostra valor removido
        pilha[*topo] = 0;//muda valor da pilha atribuindo 0 como se tivese removido
        *topo = *topo -1;// muda a posi��o do topo na pilha
    }
}

int main(){
    int pilha[num] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1;
    int valor;
    int cont;
    int num2, num3;//quantidade de valores a inserir para o conjunto for da fun��o principal
    imprimevetor(pilha);
    cout << "Quantos dados vao ser inseridos: ";
    cin >> num2;

    for(cont = 0; cont < num2; cont++){// la�o de repeti��o para inserir valores na pilha
    cout << "Digite o primeiro valor da pilha: ";
    cin >> valor;
    pilhapush(pilha, valor, &topo);
    }
    imprimevetor(pilha);

    cout << "Deseja remover numeros da Pilha: ";
    cin >> num2;

    for(cont = 0; cont < num2; cont++){// la�o para remover valores da pilha
        pilhapop(pilha, &topo);
        cout << "\n";
    }
    imprimevetor(pilha);

return 0;
}
