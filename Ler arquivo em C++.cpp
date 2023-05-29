#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream input ("Novo texto.txt");

    string textolido;

    for(string line; getline(input, line);){
        textolido += line;

    }
    cout << textolido;
return 0;
}
