#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#include <iostream>

using namespace std; // para ler a função em uma das bibliotecas sem precisar inserir em todas as linhas

int main(){ // ponteiro usado para definir a posição na memoria e imprimir

int a;
int *ponteiro = &a;

    printf("Digite o Valor para a Variavel a: ");
    scanf("%d", &a);

    printf("\nA varialvel a: %d", a);

    cout << "\nValor pelo Ponteiro: " << *ponteiro;

    cout << "\nPosicao na Memoria: " << &a;

    cout << "\nDigite um Valor para ponteiro: ";
    cin >> *ponteiro;

    cout << "\nNovo valor do ponteiro: " << a;

    return 0;

}
