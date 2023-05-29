#include <stdio.h>
#include <stdlib.h> // biblioteca para funções

int main(){
    //Criando Variaveis
    int a = 28; // definindo variavel
    int b = 24;
    int c; // variavel a ser definida

    printf("Meu nome e Julio e minha idade e: %d", a);
    printf("\n");

    printf("Minha esposa Tainara tem: %d", b); // %d definir numeros inteiros
    printf("\n");

    printf("Qual a sua idade: "); // imprimi a mensagem na tela
    scanf("%d", &c); // Grava informação na memoria da variavel
    printf("\n");


    printf("Sua Idade e: %d ", c);

    printf("\n");

    system("pause");



}
