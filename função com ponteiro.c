#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int descontodoimposto(int numero){
    return numero - 200;
}

void descontodoimpostocomponteiro(int *numero){
    *numero = *numero - 200;
}

int main(){

int a;

    printf("calculo do Imposto \nImposto 200 reais\n");
    printf("Digite o valor do salario: ");
    scanf("%d",&a);

    a = descontodoimposto(a);
// operação realizada com função s ponteiro
    printf("O valor a receber e: %d\n", a);

    descontodoimpostocomponteiro(&a);
// operação realizada com ponteiro mudando a posição da memoria
    printf("O valor a receber e: %d\n", a);

    return 0;


}
