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

int filaconstrutor (int *frente, int *atras, int fila[num]){
    for(int cont = 0; cont < num; cont++){
            fila[cont] = 0;
    }
    *frente = 0;
    *atras = -1;
}

int filaenfileirar(int fila[num], int valor, int *atras){// função para enfileirar
    if(*atras == num - 1){// pesquisa se a fila esta cheia
        cout << "A fila esta cheia!";
        cout << "\n";
    }else{// se a fila não esta cheia então a posição atras recebe 1 e a fila atribui um valor na posição
        *atras = *atras + 1;
        fila[*atras] = valor;
    }
}

int filatamanho(int frente, int atras){
    cout << "O Tamanho da Fila: " << (atras - frente) + 1;
}

int filadesenfileirar(int fila[num], int *frente, int atras){
    if(*frente > atras){
            cout << "Fila Vazia";
            cout << "\n";
    }else{
    cout << "O Valor removida da Fila: " << fila[*frente];
    cout << "\n";
    fila[*frente] = 0;
    *frente = *frente + 1;
    }
}

int main(){
    int frente, atras;
    int fila[num];
    int valor, num1;// num1 para definir o tamanho de valor digitados que o usuario quer

    filaconstrutor(&frente, &atras, fila);
    imprimevetor(fila);

    cout << "Quantos Valores Voce deseja digitar: ";
    cin >> num1;

    for(int cont = 0; cont < num1;cont++){
    cout << "digite uma valor a Fila: ";
    cin >> valor;
    filaenfileirar(fila, valor, &atras);
    }

    imprimevetor(fila);
    filatamanho(frente, atras);
    cout << "\n";

    cout << "Quantos Valores Voce deseja Remover: ";
    cin >> num1;

    for(int cont = 0; cont < num1;cont++){
    filadesenfileirar(fila, &frente, atras);
    }

    imprimevetor(fila);
    filatamanho(frente, atras);

return 0;
}
