#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

struct fruta{
    string cor;
    string Nome;
};

int main(){
    fruta *fruta1 = new fruta;

    fruta1->cor = "Amarelo";
    fruta1->Nome = "Banana";

    cout << "Fruta: " << fruta1->Nome << " Cor: " << fruta1->cor;

    fruta *ponteirofruta1 = new fruta[2];

    ponteirofruta1[0].cor = "vermelho";
    ponteirofruta1[0].Nome = "m";
    ponteirofruta1[1].cor = "Verde";
    ponteirofruta1[1].Nome = "Melancia";

    int cont;
    for(cont = 0; cont < 2; cont++){
     cout << "\nFruta: " << ponteirofruta1[cont].Nome << " Cor: " << ponteirofruta1[cont].cor;

    }

    return 0;

}
