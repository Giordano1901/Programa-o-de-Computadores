/*==================================================
	13/04 - Exerc�cios de Entrada de Dados
	Objetivo: realizar as atividades em dupla, integrando os algoritmos para entrega.
	Nome: Gustavo Emiliano Rodrigues dos Santos RGM: 28826281
	Nome: Gustavo Henrique Silva de Camargo Giordano RGM: 30093023
==================================================*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

main(){
	

/*==================================================
		DECLARA��O DE VARIAVEIS
CONVERS�O DE KM PARA MILHAS, METROS E CENT�METROS
==================================================*/
float KM, milhas, metros, centimetros;
/*================================================*/

	printf("CONVERS�O DE KM PARA MILHAS, METROS E CENTIMETROS \n");
	printf("Insira o valor para ser convertido: ");
	scanf("%f",&KM);
	
	milhas = KM/1.609;
	metros = KM*1000;
	centimetros = KM*100000;

	system("cls");
	
	printf("CONVERS�O DE KM PARA MILHAS, METROS E CENTIMETROS");
	printf("Numero inserido: %f KM \n",KM);
	printf("Milhas: %f \n",milhas);
	printf("Metros: %f \n",metros);
	printf("Centimetros: %f \n",centimetros);
}
