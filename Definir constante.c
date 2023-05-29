#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Julio 27 // Usado para Definir uma constante que não pode ser modificada

void main() {

    int a = 1;

    while(a > 0){ // repeticao infinita a te ser cancelada pelo usuario

    printf("\nMeu nome e Julio");
    printf("\nVamos comparar a diferenca das nossas idade ou Digite 0 para sair");

    printf("\nDigite sua Idade: ");
    scanf("%d", &a);

    printf("\n\nA diferenca e: %d - %d = %d",Julio,a, Julio - a);

    }
    printf("\n");
    system("pause");

}
