#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void main(){

    int nota;

    printf("Qual a nota do aluno: ");
    scanf("%d", &nota);

    if (nota <= 5){
        printf("Nota Ruim");

    }
    else if (nota >= 6 && nota < 8){// N�o esquecer de repetir a variavel para elaborar a condi��o
        printf("Nota Boa");
    }else{
        printf("Nota Otima");
    }
    printf("\n");
    system("pause");

    }

