/*==================================================
	11/05 - Exerc�cios de multipla escolha

	Nome: Matheus Yoshimi Franco Sato
	Nome: Gustavo Henrique Silva de Camargo Giordano
==================================================*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	 setlocale(LC_CTYPE, "Portuguese");
	/*=====================
	Declara��o de variaveis
		Calculadora
	=====================*/
	int opcao;
	float num1,num2,resultado;
	/*===================*/
	do
	{
		printf("================================\n");
		printf("Calculadora de Multipla Escolha \n");
		printf("\n1- Soma \n2- Subtra��o \n3- Multiplica��o \n4- Divis�o \n5- Sair \n");
		printf("================================\n");
		printf("Escolha uma das op��es acima: ");
		scanf ("%d",&opcao);
		system("cls");
		if(opcao==1)
		{
			printf("================================\n");
			printf("	    ADI��O\n");
			printf("================================\n");
			printf("Digite o primeiro numero: ");
			scanf ("%f",&num1);
			printf("Digite o segundo numero: ");
			scanf ("%f",&num2);
			resultado = num1 + num2;
			printf("O resultado da adi��o �: %f \n",resultado);
			system("pause");
			system("cls");
		}
			if(opcao==2)
			{
			printf("================================\n");
			printf("	    SUBTRA��O\n");
			printf("================================\n");
			printf("Digite o primeiro numero: ");
			scanf ("%f",&num1);
			printf("Digite o segundo numero: ");
			scanf ("%f",&num2);
			resultado = num1-num2;
			printf("O resultado da adi��o �: %f \n",resultado);
			system("pause");
			system("cls");
			}
				if(opcao==3)
				{
					printf("================================\n");
					printf("	    MULTIPLICA��O\n");
					printf("================================\n");
					printf("Digite o primeiro numero: ");
					scanf ("%f",&num1);
					printf("Digite o segundo numero: ");
					scanf ("%f",&num2);
					resultado = num1*num2;
					printf("O resultado da adi��o �: %f \n",resultado);
					system("pause");
					system("cls");
				}
					if(opcao==4)
					{
						printf("================================\n");
						printf("	    DIVIS�O\n");
						printf("================================\n");
						printf("Digite o primeiro numero: ");
						scanf ("%f",&num1);
						printf("Digite o segundo numero: ");
						scanf ("%f",&num2);
						resultado = num1/num2;
						printf("O resultado da adi��o �: %f \n",resultado);
						system("pause");
						system("cls");			
					}
	}
	while (opcao!=5);
}


