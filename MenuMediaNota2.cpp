#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_CTYPE, "Portuguese");
	/*======================
	Declaração de variaveis
	Média Variavel com Menus
	======================*/
	int nalunos = 0, opcao, i;
	float media,PI[nalunos],Trab1[nalunos],Trab2[nalunos],P1[nalunos],P2[nalunos],NF[nalunos];
	char nome[nalunos][15];
//=======================================
	do
	{
		printf("======================================\n");
		printf("	LANÇAR MÉDIA DE ALUNOS\n");
		printf("======================================");
		printf("\n1- Lançar alunos \n2- Lançar notas \n3- Consultar média geral \n4- Consultar boletim de somente um aluno \n5- Consultar boletim de todos os alunos \n6- Sair \n");
		printf("======================================\n");
		printf("Escolha uma das opções acima: ");
		scanf ("%d",&opcao);
		system("cls");
		if(opcao==1)
		{
			printf("===========================\n");
			printf("      LANÇAR ALUNOS\n");
			printf("===========================\n");
			printf("Insira a quantidade de alunos que deseja lançar: ");
			scanf("%d",&nalunos);
			for(i = 1; i <= nalunos; i++)
			{
				printf("Insira o nome do aluno %d: ",i);
				scanf("%s",&nome[i]);
			}
			system("pause");
			system("cls");
		}
		else
		{
		
			if(opcao==2)
			{
				for(i = 1; i <= nalunos; i++)
				{
					printf("===========================\n");
					printf("      LANÇAR NOTAS\n");
					printf("      Aluno %s\n",&nome[i]);
					printf("===========================\n");
					printf("Digite a nota da 'PI': ");
					scanf("%f",&PI[i]);
					printf("Digite a nota do 'Trab1': ");
					scanf("%f",&Trab1[i]);
					printf("Digite a nota do 'Trab2': ");
					scanf("%f",&Trab2[i]);
					printf("Digite a nota da 'P1': ");
					scanf("%f",&P1[i]);
					printf("Digite a nota da 'P2': ");
					scanf("%f",&P2[i]);
					system("pause");
					system("cls");
				}
			}
			else
			{
				if(opcao==3)
				{
					//Consultar média geral
					printf("=============================\n");
					printf("   CONSULTA DE MÉDIA GERAL\n");
					printf("=============================\n");
					media = (PI[nalunos] * 0.5) + (P1[nalunos] * 0.15) + (P2[nalunos] * 0.15) + (Trab1[nalunos] * 0.10) + (Trab2[nalunos] * 0.10);
					printf("RESULTADO: %.2f\n",media);
					system("pause");
					system("cls");
				}
				else
				{
					if(opcao==4)
					{
						//Consultar boletim de somente um aluno
						printf("Menu 4");
						system("pause");
						system("cls");
					}
					else
					{
						if (opcao==5)
						{
							//Consultar boletim de todos os alunos
							printf("Menu 5");
							system("pause");
							system("cls");
						}
					}
				}
			}
		}
	}
	while (opcao!=6);
}
