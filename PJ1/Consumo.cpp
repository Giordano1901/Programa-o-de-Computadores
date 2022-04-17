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
/*============================
	DECLARAÇÃO DE VARIAVEIS
	 CALCULO DE CONSUMO
============================*/
float KM, alcool, gasolina;
/*==========================*/

	printf("CALCULO DE CONSUMO DE COMBUSTIVEL \n");
	printf("Informe o valor do KM rodado: ");
	scanf("%f",&KM);
	
	alcool = KM*0.535;
	gasolina = KM*0.80;

	system("cls");

	printf("KM rodado: %f \n",KM);
	printf("Gasto em Alcool: R$ %f \n",alcool);
	printf("Gasto em Gasolina: R$ %f \n",gasolina);
}
