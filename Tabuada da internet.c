#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int tabuada = 0;
    int x;
    printf("\nDigite a tabuada que voce deseja: ");
    scanf("%i", &tabuada);

    for(x = 1; x<=10; ++x){
        //1 x 5 = 5
        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}
