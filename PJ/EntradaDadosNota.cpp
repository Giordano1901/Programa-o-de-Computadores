/*==================================================
	13/04 - Exercícios de Entrada de Dados
	Objetivo: realizar as atividades em dupla, integrando os algoritmos para entrega.

	Nome: Gustavo Emiliano Rodrigues dos Santos RGM: 28826281
	Nome: Gustavo Henrique Silva de Camargo Giordano RGM: 30093023
==================================================*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

main(){
	/*======================
	Declaração de variaveis
		Calculadora
	======================*/
	float PI, Trab1, Trab2, P1, P2, NF;
	/*====================*/
	
	printf("Digite a nota do 'PI':");
    scanf("%f",&PI);
    printf("Digite a nota do 'Trab1':");
    scanf("%f",&Trab1);
    printf("Digite a nota do 'Trab2':");
    scanf("%f",&Trab2);
    printf("Digite a nota do 'P1':");
    scanf("%f",&P1);
    printf("Digite a nota do 'P2':");
    scanf("%f",&P2);
    
	NF = (PI*50)/100+(Trab1*10)/100+(Trab2*10)/100+(P1*15)/100+(P2*15)/100;
    
    system("cls");
    
    printf("Sua nota final: %f \n", NF);
}
