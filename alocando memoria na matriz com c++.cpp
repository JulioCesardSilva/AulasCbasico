#include<stdlib.h>
#include<stdbool.h>
#include <string>
#include <iostream>
#include<new>
// usado para impimir cout e gravar em cin
using namespace std;

int main(){

    int linhas, colunas, i, j;
    //Ponteiro para ponteiro usar ** duas vezez
    int **matriz;
// escolhendo o tamanho da matriz
    cout << "Digite o numero de Linhas: ";
    cin >> linhas;
    cout << "\nDigite o numero de Colunas: ";
    cin >> colunas;

//alocando as linhas na memoria usando o new
matriz = (int **) new int(linhas);
// alocando memoria para as colunas de cada linha
    for(i = 0;i < linhas; i++){
        matriz[i] = (int *) new int(colunas);
        }
//Prenchendo os valores e mostrabdo na tela
    for(i = 0;i < linhas; i++){
        for(j = 0;j < colunas; j++){
            matriz[i][j] = i;
            cout << matriz[i][j] ;
            cout << " ";
           }
        cout << "\n";
    }
// liberar memoria
    free(matriz);
    return 0;
}
