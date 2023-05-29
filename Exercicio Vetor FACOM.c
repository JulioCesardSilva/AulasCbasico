#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Exercicio: Fac¸a um programa que possua um vetor denominado A que armazene 6 numeros inteiros. O programa deve executar os seguintes passos:
//(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
//(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posic¸ ´ oes ˜
//A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
//(c) Modifique o vetor na posic¸ao 4, atribuindo a esta posic¸ ˜ ao o valor 100. ˜
//(d) Mostre na tela cada valor do vetor A, um em cada linha.



int main(){
    int A[6];
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    int i, tamanho = 6;

    printf("Mostrando a Seguencia dos Vetores: ");
    for(i = 0;i < tamanho; i++){
        printf("\n %d", A[i]);
    }
    printf("\nA soma do vetores: A0 + A1 + A5 = %d",A[0] + A[1] + A[5]);

    A[4] = 100;
    printf("\nModificado a Posicao A4: %d", A[4]);
    return 0;


}
