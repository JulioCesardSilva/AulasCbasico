#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    int vetor [4]; // Vetor iqual uma pasta com varios documentos no caso um documento co mvarias variaveis
    int i;
    int total = 0; // declara�ao de variavel para realizar opera��o matematica
    int media = 0;

            //declara�ao da media ultilizando o for para simplificar a opera�ao
    printf("Calculadora de Media");

    //Simplifica��o da opera�ao usando la�o for para realizar a opera��o matematica de media
for(i = 0; i < 4; i++){
    printf("\nDigite o Valor: ");
    scanf("%d", &vetor[i]);

    total += vetor[i];

    media = total/4;

    }
    printf("\nA media dos valores e: %d",media);

    printf("\n");
    system("pause");

}
