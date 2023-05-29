#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // variavel boleana de verdadeiro ou falso



int main(){

    int a;
    float b;
    char c;
    bool d; // condicional para verdadeiro 1 ou falso 0

    //declarando variavel de inicio
    printf("sua idade e: ");
    scanf("%d", &a);

    printf("seu Salario e: ");
    scanf("%f", &b);

    printf("Seu nome e: ");
    scanf(" %c", &c); // espaçõ para declarar caracter

    printf("As informaçoes sao verdadeiras se sim digite 1 se nao 0: ");
    scanf("%d", &d);
    printf("\n");


    printf("Sua idade e: %d", a);
    printf("\n");
    printf("seu salario e: %.3f", b);
    printf("\n");
    printf("Seu nome e: %c\n", c);
    printf("Informação: %d\n", d);


    system("pause");

}
