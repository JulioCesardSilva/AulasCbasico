#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#define num 10
using namespace std;

int imprimevetor (int vetor[num]){
    int cont;
                  cout << "Os valores da Tabela: ";
    for(cont = 0; cont < num; cont++){// percorrando  lista

        cout << vetor[cont] << " - ";
        }
        cout << "\n";
}

int pilhapush(int pilha[num], int valor, int *topo){// função para empilhar uma pilha e ponteiro na variavel topo para mudar em todas funções
    if(*topo == num -1){
        cout << "Pilha Cheia!\n";
        }else{
        *topo = *topo + 1;// caso o topo nao estiver cheio então topo começa em -1 e acrescenta 1 para começar em posição 0
        pilha[*topo] = valor;// acrecentando valor a posição do topo
        }
}

int pilhapop(int pilha[num], int *topo){//função desempilhar dados
    if(*topo == -1){// testa pilha para verificar se esta vazia
        cout << "Sua Pilha esta Vazia";
    }else{
        cout << "A valor removido e: " << pilha[*topo];// mostra valor removido
        pilha[*topo] = 0;//muda valor da pilha atribuindo 0 como se tivese removido
        *topo = *topo -1;// muda a posição do topo na pilha
    }
}

int pilhacontrutor(int pilha[num], int *topo){
    *topo = -1;
    int cont;

    for(cont = 0; cont < num;cont++){
        pilha[cont] = 0;
    }
}

int tamanhopilha(int *topo){
    return *topo + 1;
    }

int selection_sort(int vetor[num]){
    int menorvalor, aux, l1, l2;

    for(l1 = 0; l1 < num; l1 ++){// priemiro laço percorre todo o algoritmo laço externo
        menorvalor = l1;// recebe a posição inicial para o menor valor
        for(l2 = l1 + 1; l2 < num; l2 ++){// segundo laço analisa os elementos a frente
                if(vetor[l2] < vetor[menorvalor]){//caso ele encontre um vetor de menor valor
                    menorvalor = l2;
                }
        }// encerra laço interno
        if(menorvalor != l1){// apos encontra o menor valor fazer substituição e retornar ao laçõ externo
            aux = vetor[l1];// grava valor do vetor l1 para nao se perder durante a troca
            vetor[l1] = vetor[menorvalor]; // troca o valor da posição l1 pelo menor valor achado durante o laço interno
            vetor[menorvalor] = aux;
        }

    }
}

int main(){
    int pilha[num];
    int topo;
    int valor;
    int cont;
    int num2, num3;//quantidade de valores a inserir para o conjunto for da função principal
pilhacontrutor(pilha, &topo);
imprimevetor(pilha);

inicio:
while(num3 > 1 || num3 < 6){
        cout << "\nPrograma Pilha!\n";
    cout << "\nPara adcionar dados digite 1!";
    cout << "\nPara Remover dados digite 2!";
    cout << "\nVerificar o Tamanho da Pilha e mostrar digite 3!";
    cout << "\nLimpar a Pilha Digite 4!";
    cout << "\nPara Ordenar Digite 5!";
    cout << "\nPara Sair 6!";
    cout << "\nQual operacao Deseja: ";
    cin >> num3;

switch(num3){

case 1:
    cout << "Quantos dados vao ser inseridos: ";
    cin >> num2;

    for(cont = 0; cont < num2; cont++){// laço de repetição para inserir valores na pilha
    cout << "Digite o primeiro valor da pilha: ";
    cin >> valor;
    pilhapush(pilha, valor, &topo);
    }
    imprimevetor(pilha);
    cout << "\n";
    system("cls");
    break;

case 2:
    cout << "Deseja remover numeros da Pilha: ";
    cin >> num2;

    for(cont = 0; cont < num2; cont++){// laço para remover valores da pilha
        pilhapop(pilha, &topo);
        cout << "\n";
    }
    imprimevetor(pilha);
    cout << "\n";
    system("cls");
    break;

case 3:
    tamanhopilha(&topo);
    cout << "Tamanho da pilha: " << topo + 1;
    cout << "\n";
    imprimevetor(pilha);
    cout << "\n";
    break;

case 4:
    pilhacontrutor(pilha, &topo);
    imprimevetor(pilha);
    cout << "\n";
    system("cls");
    break;
case 5:
   selection_sort(pilha);
   cout << "\n";
   imprimevetor(pilha);
   cout << "\n";
   break;
case 6:
    cout << "encerrado!\n";
    return 0;
default:
    cout << "Valor nao Encontrado!";
}
}

return 0;
}
