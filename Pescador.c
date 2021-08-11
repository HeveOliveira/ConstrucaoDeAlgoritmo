// 5. João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. 
// Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) 
// deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes)
//  e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. 
// Imprima os dados do programa com as mensagens adequadas.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    float peso = 0, excesso = 0, multa = 0.0;

    printf("Olá João, digite o peso: \n");
    scanf("%f", &peso, "\n");
    if(peso > 0){
        if(peso > 50){
            excesso = peso - 50;
         }else {
            excesso = 0;
        }
    multa = excesso * 4.0;
    printf("Sua multa será de : %5.2f reais \n", multa); 
    }
   else {
       printf("Peso digitado está invalido, verifique por favor!");
   }
}