#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#include <iostream>

using namespace std;


int main(){

 int vetor [0];
 int *ponteiro = &vetor[0];
 int i, media, total;

    cout << "Quantos alunos a sala possui: ";
    cin >> *ponteiro;

 for(i = 0; i < vetor[0]; i++){
      cout << "Digite a Media: ";
      cin >> vetor[i];}
 for(i = 0; i < vetor[0]; i++){
      total += vetor[i];
      media = total / *ponteiro;

 }

   cout << "\nMedia: " << media;
   return 0;
 }

