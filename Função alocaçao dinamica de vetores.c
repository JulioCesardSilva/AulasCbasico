#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//criando fun��o para alocar memoria para o vetor ultilizando ponteiro

int* alocandomemoria(int tamanho){
    int i;
    //aloca��o dinamica de memoria fun��o malloc para alocar memoria sizeof para definir tamanho de espa�o na memoria seguido de tipo de variavel
    i = (int*) malloc(tamanho * sizeof(int));
    return i;
}

void main(){
// criando ponteiro
    int *vetor;
    int tamanho, i;

    printf("Digite o Tamanho do vetor: ");
    scanf("%d", &tamanho);
    // definindo vetor para chamar fun��o

    vetor = alocandomemoria(tamanho);

    for(i = 0; i < tamanho; i++){
        vetor[i] = 10;
    }
// la�o para imprimir vetores na tela
    for(i = 0; i < tamanho; i++){
        printf("Os vetores escolhidos: %d\n", vetor[i]);

        }
    // fun��o free para limpar memoria alocada
    free( vetor );

    return 0;

}
