#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file; // arquivo a ser lido
    int c;

    file = fopen("Novo texto.txt", "r");// abrindo o diretorio e arquivo a ser lido

    if(file){// se o arquivo for encontrado
        while((c = getc(file)) != EOF){//procurar e encontrar letras ate o fim do arquivo
                printf("%c", c);
        }

       fclose(file);// fecha arquivo
        }else{
        printf("Arquivo nao encontrado");//caso nao encontre o arquivo
}

       return 0;
    }

