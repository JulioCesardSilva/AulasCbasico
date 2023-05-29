#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    int mult, cont;

while(mult > 0){

    printf("\nTabuada");
    printf("\nDigite 0 para sair");
    printf("\nDigite o Multiplicador: ");
    scanf("%d", &mult);

    for(cont = 1; cont <= 10; cont++){

        printf("%d x %d = %d",mult,cont, mult * cont);

        printf("\n");}
    }
    system("pause");

}
