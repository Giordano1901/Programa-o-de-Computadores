/*==================================================================
	04/05 - Estrutura de Repetição
	
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
	DECLARAÇÃO DE VARIAVEIS
	=====================*/
	float nota1=0,nota2=0,media=0;
	int resp;
	/*=====================*/
	
	do
	{
		printf("Insira a primeira nota: ");
		scanf("%f",&nota1);
		printf("Insira a segunda nota: ");
		scanf("%f",&nota2);
		
		media = (nota1 + nota2)/2;
		printf("A média do aluno é: %f\n",media);
		
		printf("Insira '1' para continuar, '2' para encerrar\n");
		scanf("%d",&resp);
	}
	while (resp==1);
}
