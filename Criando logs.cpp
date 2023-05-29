#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <new>
#include <ctime>
#define num 10
using namespace std;

int main(){

  time_t timer;
  struct tm *horarioLocal;


  time(&timer); // Obtem informações de data e hora
  horarioLocal = localtime(&timer);

  int dia = horarioLocal->tm_mday;
  int mes = horarioLocal->tm_mon + 1;
  int ano = horarioLocal->tm_year + 1900;

     ofstream arquivosaida;//cria objeto e arquivo

        arquivosaida.open("Log.txt", std::ios_base::app);// abri o arquivo ou cria se nao existir

        arquivosaida << "Data: "    << dia  << "/" << mes << "/" << ano << endl;


        arquivosaida.close();

}
