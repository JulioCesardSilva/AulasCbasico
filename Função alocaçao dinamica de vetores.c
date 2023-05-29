#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//criando função para alocar memoria para o vetor ultilizando ponteiro

int* alocandomemoria(int tamanho){
    int i;
    //alocação dinamica de memoria função malloc para alocar memoria sizeof para definir tamanho de espaço na memoria seguido de tipo de variavel
    i = (int*) malloc(tamanho * sizeof(int));
    return i;
}

void main(){
// criando ponteiro
    int *vetor;
    int tamanho, i;

    printf("Digite o Tamanho do vetor: ");
    scanf("%d", &tamanho);
    // definindo vetor para chamar função

    vetor = alocandomemoria(tamanho);

    for(i = 0; i < tamanho; i++){
        vetor[i] = 10;
    }
// laço para imprimir vetores na tela
    for(i = 0; i < tamanho; i++){
        printf("Os vetores escolhidos: %d\n", vetor[i]);

        }
    // função free para limpar memoria alocada
    free( vetor );

    return 0;

}
