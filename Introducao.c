#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main()
{
   int numero;
   printf("Digite um número!");
   scanf("%d", &numero); // comando para entrada de valor int

   printf("o número digitado foi %d", numero);
}