#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

    int a;

    printf("Qual e a Idade: ");
    scanf("%d", &a);

    if(a > 17){ // definindo a condi�ao
        printf("Maior de idade");

    }else{ // caso a condi��o seja contraria
        printf("Menor de Idade");
    }
    printf("\n");

    system("pause");

    }
