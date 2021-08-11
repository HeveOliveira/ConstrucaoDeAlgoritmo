// 1. Faça um Programa que peça as 4 notas bimestrais e mostre a média.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    float nota1, nota2, nota3, nota4, media;

    printf("Digite 4 notas para calculo de média.\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    scanf("%f", &nota4);
    if(nota1 < 0 || nota2 < 0 || nota3 < 0 || nota4 < 0) {
        printf("Digite notas validas, por favor");
    }else {
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("sua média é: %5.2f \n", media);
    }
}