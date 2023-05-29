#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int a, b; // Definindo vetores

    printf("Primeiro Valor: ");
    scanf("%d", &a);
    printf("\nSegundo Valor: ");
    scanf("%d", &b);

    printf("O resto da Divisao dos Valores %d e %d = %d",a,b, a % b); // Operação de Resto da divisao usando %
    printf("\n");

    // Absoluto
    printf("Primeiro Valor: ");
    scanf("%d", &a);

    printf("O valor absoluto a = %d", abs(a)); // Operação Absoluto usando abs()
    printf("\n");

    system("pause");




}
