#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// biblioteca para alocar memoria e bibliotecas de c++
#include <new>
#include <iostream>
#include <string>
// para usar a função cout e necessario declarar antes o std
using namespace std;

int main(){

    int tamanho, i;

    cout << "Digite a Quantidade de Vetores: ";
    cin >> tamanho;

    //Alocando a memoria dentro do vetor

   int *vetor =  new int(tamanho);

   for(i = 0; i < tamanho; i++){
        vetor[i] = i;
        cout << "\nO Vetor: " << vetor[i];
    }
    return 0;
}
