#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Função de parametro que esta recebendo o parametro da função principal
void Mostrarsucessor(int numero){
    printf("\nO sucessor de %d e: %d", numero, numero + 1);
}

// função que esta enviando o parametro para a função principal
int mostrarantecessor(int numero){
    return numero - 1;
}




int main(){

    int a;

    printf("Digite um Valor: ");
    scanf("%d", &a);

    Mostrarsucessor(a);

    printf("\nO antecessor de %d e: %d",a, mostrarantecessor(a));

    return 0;


}
