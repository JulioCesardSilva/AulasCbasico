#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
        ofstream arquivosaida;//cria objeto e arquivo

        arquivosaida.open("Novo texto.txt", std::ios_base::app);// abri o arquivo ou cria se nao existir

        arquivosaida << "\nJulio Cesar da Silva";//escreve dentro do arquivo

        arquivosaida.close();//fecha o arquivo

        return 0;
}
