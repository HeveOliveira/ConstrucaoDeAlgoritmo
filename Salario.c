// Faça um Programa que pergunte quanto você ganha por hora 
// e o número de horas trabalhadas no mês.
// Calcule e mostre o total do seu salário no referido mês. 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    float qtdHora, hrTrab, salario;

    printf("Quanto você ganha por hora: \n");
    scanf("%f", &qtdHora, "\n");
    if(qtdHora < 0){
        printf("Quantidade de ganho por hora insuficiente");
    }
    printf("Agora digite o número de horas trabalhadas: \n");
    scanf("%f", &hrTrab, "\n");
    salario = (qtdHora * hrTrab);
    printf("Seu salario será: %5.2f \n", salario);
}