#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (void)
{
int a;
printf("digite um numero inteiro: ");
scanf("%d",&a);
if(a%2==0)//operador %
{
printf("Par");
}
else
printf("Impar");
}
