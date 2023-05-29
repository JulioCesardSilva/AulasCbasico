#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// usado para imprimir na tela o valor dos vetores
void imprimevetor(int *vetor, int tamanho){
    int i;

    for(i = 0; i < tamanho; i++)
        printf("O Valor do Vetor e: %d\n",vetor[i]);
}
// usado para gravar vetores na memoria
void definirvalordovetor(int *vetor, int tamanho){
    int i;

    for(i = 0;i < tamanho; i++)
        scanf("%d", &vetor[i]);
}


int main(){
    int vet[3];

    printf("Digite o Valor dos Vetores: \n");

definirvalordovetor(vet, 3);
imprimevetor(vet, 3);

return 0;

}
