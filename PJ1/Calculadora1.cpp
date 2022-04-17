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
	int num1, num2, soma, sub, div, multi;
	/*====================*/
	
	printf ("Insira o primeiro numero:");
	scanf ("%d", &num1);
	printf ("Insira o segundo numero:");
	scanf ("%d", &num2);
	sub = num1-num2;
	soma = num1+num2;
	div = num1/num2;
	multi = num1*num2;
	
	system("cls");
	
	printf("Somar: %d \n", soma);
	printf("Subtrair: %d \n", sub);
	printf("Dividir: %d \n", div);
	printf("Multiplicar: %d \n", multi);
}


