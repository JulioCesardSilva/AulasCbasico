#include<stdlib.h>
#include<stdbool.h>

int main(){

    int linhas = 11, colunas = 11, i, j, tabuada;
    //Ponteiro para ponteiro usar ** duas vezez
    int **matriz;
// escolhendo o tamanho da matriz


//alocando as linhas na memoria
matriz = (int **) malloc(linhas * sizeof(int*));
// alocando memoria para as colunas de cada linha
    for(i = 0;i < linhas; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
        }
//Prenchendo os valores e mostrabdo na tela
    for(i = 1;i < linhas; i++){
        for(j = 1;j < colunas; j++){
            matriz[i][j] = i;
            printf("%dx%d = %d\n", i, j, i * j);
           }
        printf("\n");
    }
// liberar memoria
    free(matriz);
    return 0;
}
