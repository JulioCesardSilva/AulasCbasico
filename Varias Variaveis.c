#include <stdio.h>
#include <stdlib.h> // biblioteca para funções

int main(){

    int a;
    float b;
    char c;

    a = 25;
    b = 1.5;
    c = 'J';

    printf("Sua idade e: %d", a);
    printf("\n");
    printf("seu salario e:%.3f", b);
    printf("\n");
    printf("Seu nome e: %c\n", c);



    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c);



    printf("Sua idade e: %d", a);
    printf("\n");
    printf("seu salario e:%.3f", b);
    printf("\n");
    printf("Seu nome e: %c\n", c);

    system("pause");




}
