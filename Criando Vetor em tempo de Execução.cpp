#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <new>
#define num 10
using namespace std;

int imprimevetor(int vetor[num], int tamanhovetor){
    int cont;

    printf("Os Valores do vetor sao: ");
    for(cont = 0; cont < tamanhovetor; cont++){
         printf(" %d ", vetor[cont]);
    }
}

//Função alocando memoria em C++
int* alocavetorcplusplus(int tamanho){
    int *v;// ponteiro auxiliar

    v = new int[tamanho];
return v;
}
//função criando vetor em tempo de execução
int* alocavetor(int tamanho){// alocar memoria para criar o vetor
    int *v; //ponteiro axiliar

    v = (int *) malloc(tamanho * sizeof(int));//definindo tipo de variavel para alocar memoria usando malloc e sizeof

    return v;
}

int main(){
    int vetor[num] = {1,2,3,4,5,6,7,8,9,10};
    int cont;
    int tamanhodalista; // variavel para apoiar escolha do tamanho do vetor

    imprimevetor(vetor, num);
    printf("\n");

// imprimindo na tela pergunta pra criar tamanho do vetor por decisao do usuario
    printf("Qual tamanho do Vetor voce deseja: ");
    scanf("%d", &tamanhodalista);



    //tamanho para novo vetor
    int *novovetor;

    novovetor = alocavetor(tamanhodalista);// acionando a função e passando as posições da memoria para o novo vetor

    for(cont = 0; cont < tamanhodalista; cont++){
        scanf("%d", &novovetor[cont]);
    }

    imprimevetor(novovetor, tamanhodalista);

    //criando alocação para vetor em C++
    int *vetorcplusplus;

    cout << "\n\nDigite a Quantidade de vetores em C++: ";
    cin >> tamanhodalista;

    vetorcplusplus = alocavetorcplusplus(tamanhodalista);

    for(cont = 0; cont < tamanhodalista;cont++){
        cout << "Digite os Valores agora " << cont + 1 << ":";
        cin >> vetorcplusplus[cont];
    }

     imprimevetor(vetorcplusplus, tamanhodalista);


return 0;
}
