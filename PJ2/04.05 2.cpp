/*==================================================================
	04/05 - Estrutura de Repeti��o
	
	Nome: Gustavo Emiliano Rodrigues dos Santos RGM: 28826281
	Nome: Gustavo Henrique Silva de Camargo Giordano RGM: 30093023
==================================================================*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	/*=====================
	DECLARA��O DE VARIAVEIS
	=====================*/
	float media,notas[5],soma;
	int i = 0;
	/*=====================*/
	
	for (i=1; i<=; i++)
	{
		printf("Digite a nota %d do aluno: ",i);
		
		scanf("%f",&notas[i]);
		soma = notas[1] +soma;
	}
	media=soma/5;
	printf("\nA m�dia do aluno �: %.2f",media);
}
