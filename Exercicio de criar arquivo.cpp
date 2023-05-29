#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
        ofstream arquivosaida;//cria objeto e arquivo
        string a;

        cout << "Digite seu nome: ";
        getline(cin, a);// para ler frase completas

        arquivosaida.open("exercicio criar arquivo.txt", std::ios_base::app);// abri o arquivo ou cria se nao existir

        arquivosaida << a;//escreve dentro do arquivo

        arquivosaida.close();//fecha o arquivo

        return 0;
}
