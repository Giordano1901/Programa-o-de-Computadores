/*========================================
27/04 - Calculo de IMC (Desafio)

Gustavo Emiliano Rodrigues dos Santos
Gustavo Henrique Silva de Camargo Giordano	
========================================*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
/*===================================
		DECLARA��O DE VARIAVEIS
===================================*/
	float altura, peso, result;
/*===============================*/
	printf("==================================== \n CALCULO DE INDICE DE MASSA CORPORAL \n==================================== \n");
	printf("Insira sua altura (em metros): ");
	scanf("%f",&altura);
	printf("Insira seu peso: ");
	scanf("%f",&peso);
	system("cls");
	result=peso/(altura*altura);
	
	if(result <= 18.5){
		printf("O resultado � menor/igual a 18.5: Magreza");
	}
	else{
		if((result>=18.6) && (result<=24.9)){
			printf("O resultado � entre 18,6 e 24,9: Saud�vel");
		}
		else{
			if((result>=25) && (result<=29.9)){
				printf("O resultado � entre 25 e 29,9: Sobrepeso");
			}
			else{
				if((result>=30) && (result<=34.9)){
					printf("O resultado � entre 30 e 34,9: Obesidade Grau I");
				}
				else{
					if((result>=35) && (result<=39.9)){
						printf("O resultado � entre 35 e 39,9: Obesidade Grau II");
					}
					else{
						if (result>=40){										
							printf("O resultado � acima de 40: Obesidade Grau III");
						}
					}
				}
			}
		}
	}
}
