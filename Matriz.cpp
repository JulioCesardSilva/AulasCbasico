#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#include <iostream>

using namespace std; // para ler a função em uma das bibliotecas sem precisar inserir em todas as linhas

int main(){

    int matriz [2][2], i, j;

    for(i = 0; i < 2; i++){ // Gravando a Matriz na posição
        for(j = 0; j < 2; j++){
            cout << "Digite a Media: ";
            cin >> matriz[i][j];

        }
        }

    for(i = 0; i < 2; i++){ // lendo a Matriz no formato
        for(j = 0; j < 2; j++){
            cout << matriz[i][j] << " ";

        }
        cout << "\n";
    }
    return 0;
}
