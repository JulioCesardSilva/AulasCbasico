#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// define a função aqui e monta embaixo da funcao principal


bool returnaboleana(bool a);
void assinatura();

int main(){
    //gravando parametro na funçao principal
    int a;
        printf("1 para Verdadeiro\n0 Para Falso\n\nVoce e Homem: ");
        scanf("%d", &a);


    bool variavelboleana;

    variavelboleana = returnaboleana(a);

    if(variavelboleana){
        printf("Verdadeiro!\n");

    }else{
        printf("Falso!\n");
    }
    assinatura();
    return 0;
}
//Funcao que recebeu o parametro da funcao principal
bool returnaboleana(bool a){
    return a;
}

void assinatura(){
   printf("\nProgramador Julio Cesar\n");

}

