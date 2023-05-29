#include<stdlib.h>
#include<stdbool.h>

int main(){

    int linhas, colunas, i, j;
    //Ponteiro para ponteiro usar ** duas vezez
    int **matriz;
// escolhendo o tamanho da matriz
    printf("Digite o numero de Linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de Colunas: ");
    scanf("%d", &colunas);

//alocando as linhas na memoria
matriz = (int **) malloc(linhas * sizeof(int*));
// alocando memoria para as colunas de cada linha
    for(i = 0;i < linhas; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
        }
//Prenchendo os valores e mostrabdo na tela
    for(i = 0;i < linhas; i++){
        for(j = 0;j < colunas; j++){
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
           }
        printf("\n");
    }
// liberar memoria
    free(matriz);
    return 0;
}
