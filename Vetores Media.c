#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    int vetor [3]; // Vetor iqual uma pasta com varios documentos no caso um documento co mvarias variaveis


            //declaraçao da media pelo modo mais dificiu
    printf("Calculadora de Media");
    printf("\nDigite o Primeiro Valor: ");
    scanf("%d", &vetor[0]);
    printf("\nDigite o Segundo Valor: ");
    scanf("%d", &vetor[1]);
    printf("\nDigite o Terceiro Valor: ");
    scanf("%d", &vetor[2]);


    printf("A media dos valores e: %d",(vetor[0] + vetor[1] + vetor[2]) / 3);



    printf("\n");
    system("pause");

}
