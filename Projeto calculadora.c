#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

    int a, b;

    while(a < 1 || a > 4){
            printf("\n");

    printf("Calculadora");
    printf("\nDigite 1 para soma");
    printf("\nDigite 2 para Subtracao");
    printf("\nDigite 3 para Divisao");
    printf("\nDigite 4 para Multiplicacao");
    printf("\n\nQual Operacao voce deseja: ");
    scanf("%d", &a);

       //Switch case outra opcao para simplificar condicionais
    switch(a){
        case 1:
            printf("Primeiro Valor: ");
    scanf("%d", &a);
    printf("\nSegundo Valor: ");
    scanf("%d", &b);

    printf("A soma dos Valores %d e %d = %d",a,b, a + b); // Operação de soma usando +
    printf("\n");
        case 2:
            printf("Primeiro Valor: ");
    scanf("%d", &a);
    printf("\nSegundo Valor: ");
    scanf("%d", &b);

    printf("A Subtracao dos Valores %d e %d = %d",a,b, a - b); // Operação de subtração usando -
    printf("\n");
        case 3:
            printf("Primeiro Valor: ");
    scanf("%d", &a);
    printf("\nSegundo Valor: ");
    scanf("%d", &b);

    printf("A Divisao dos Valores %d e %d = %d",a,b, a / b); // Operação de divisão usando /
    printf("\n");
        case 4:
            printf("Primeiro Valor: ");
    scanf("%d", &a);
    printf("\nSegundo Valor: ");
    scanf("%d", &b);

    printf("A Multiplicacao dos Valores %d e %d = %d",a,b, a * b); // Operação de multiplicacao usando *
    printf("\n");
        break;  // para sair das condicoes
        default: // substitui o else caso nao
            printf("Opcao Invalida");
            break;
    }
    }

     printf("\n");
     system("pause");

}
