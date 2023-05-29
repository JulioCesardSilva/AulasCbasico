#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    char p[20];

    printf("Digite seu nome: ");

    setbuf(stdin, 0); // limpar a entrada padrão da memoria da strings

    fgets(p, 20, stdin); // ler a strings

    printf("%s", p);

    printf("\n");
    system("pause");

}
