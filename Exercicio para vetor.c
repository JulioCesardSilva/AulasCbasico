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
int definirvalordovetor(int *vetor, int tamanho){
    int i;

    for(i = 0;i < tamanho; i++){
        printf("Possicao %d - Digite a Media: ", i);
        scanf("%d", &vetor[i]);}
}


void main(){
    int med1[50];
    int tamanho, mediasala, total, i;

    printf("Media de notas da Sala Calculadora \n\n\n");
    printf("Numero de Alunos na Sala:");
    scanf("%d", &tamanho);

definirvalordovetor(med1, tamanho);

    printf("Valor das Medias por aluno: \n");

imprimevetor(med1, tamanho);


    for(i = 0; i < tamanho; i++){
        total += med1;

    }
    mediasala = total/tamanho;
    printf("A media da turma: %d", mediasala);

return 0;

}
