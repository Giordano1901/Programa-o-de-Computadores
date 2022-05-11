/*==================================================
	11/05 - Exercícios de multipla escolha

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
	Declaração de variaveis
		Calculadora
	=====================*/
	int opcao;
	float num1,num2,resultado;
	/*===================*/
	do
	{
		printf("================================\n");
		printf("Calculadora de Multipla Escolha \n");
		printf("\n1- Soma \n2- Subtração \n3- Multiplicação \n4- Divisão \n5- Sair \n");
		printf("================================\n");
		printf("Escolha uma das opções acima: ");
		scanf ("%d",&opcao);
		system("cls");
		if(opcao==1)
		{
			printf("================================\n");
			printf("	    ADIÇÃO\n");
			printf("================================\n");
			printf("Digite o primeiro numero: ");
			scanf ("%f",&num1);
			printf("Digite o segundo numero: ");
			scanf ("%f",&num2);
			resultado = num1 + num2;
			printf("O resultado da adição é: %f \n",resultado);
			system("pause");
			system("cls");
		}
			if(opcao==2)
			{
			printf("================================\n");
			printf("	    SUBTRAÇÃO\n");
			printf("================================\n");
			printf("Digite o primeiro numero: ");
			scanf ("%f",&num1);
			printf("Digite o segundo numero: ");
			scanf ("%f",&num2);
			resultado = num1-num2;
			printf("O resultado da adição é: %f \n",resultado);
			system("pause");
			system("cls");
			}
				if(opcao==3)
				{
					printf("================================\n");
					printf("	    MULTIPLICAÇÃO\n");
					printf("================================\n");
					printf("Digite o primeiro numero: ");
					scanf ("%f",&num1);
					printf("Digite o segundo numero: ");
					scanf ("%f",&num2);
					resultado = num1*num2;
					printf("O resultado da adição é: %f \n",resultado);
					system("pause");
					system("cls");
				}
					if(opcao==4)
					{
						printf("================================\n");
						printf("	    DIVISÃO\n");
						printf("================================\n");
						printf("Digite o primeiro numero: ");
						scanf ("%f",&num1);
						printf("Digite o segundo numero: ");
						scanf ("%f",&num2);
						resultado = num1/num2;
						printf("O resultado da adição é: %f \n",resultado);
						system("pause");
						system("cls");			
					}
	}
	while (opcao!=5);
}


