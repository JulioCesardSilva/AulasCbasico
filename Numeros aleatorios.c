#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> // para numeros aleatorios
void main(){
    //definir numero aleatorio
    srand((unsigned) time(NULL));// unsigned para valores positivos e time null para tempo na memoria

    int ale = rand();

    printf("O valor escolhido e: %d", ale);

    printf("\n");

    int ale2 = rand() % 60; // definir margem de pesquisa de numeros aleatorios

    printf("O valor escolhido e: %d", ale2);

    printf("\n");

    system("pause");

}

