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
	int     
		nalunos,
		opcao,
		i;
	float   
		media [nalunos],
		mediageral = 0,
		operacao [nalunos],
		PI[nalunos],
		num = 0,
		Trab1[nalunos],
		Trab2[nalunos],
		P1[nalunos],
		P2[nalunos],
		NF[nalunos];
	char
		alunos[nalunos][50];
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
			for(i=1; i<=nalunos; i++)
			{
				printf("Insira o nome do aluno %d: ",i);
				scanf("%s",&alunos[i]);
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
					printf("      Aluno %s\n",&alunos[i]);
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
					media[i] = (PI[i] * 0.5) + (P1[i] * 0.15) + (P2[i] * 0.15) + (Trab1[i] * 0.10) + (Trab2[i] * 0.10);
					printf("A media deste aluno é: %.2f\n\n",media[i]);
					system("pause");
					system("cls");
				}
			}
			else
			{
				if(opcao==3)
				{
					for (i=1; i<=nalunos; i++)
					{
						mediageral = media[i] + media[i];
					}
					mediageral = mediageral/nalunos;
					printf("=============================\n");
					printf("   CONSULTA DE MÉDIA GERAL\n");
					printf("=============================\n");
					printf("RESULTADO: %.2f\n",mediageral);
					system("pause");
					system("cls");
				}
				else
				{
					if(opcao==4)
					{
						//Consultar boletim de somente um aluno
						printf("==============================\n");
						printf("CONSULTAR BOLETIM DE UM ALUNO\n");
						printf("==============================\n");
						printf("Insira o numero do aluno desejado para visualizar a nota: ");
						scanf("%d",&i);
						printf("\n======= Notas do aluno %s =======\n",alunos[i]);
						printf("| P1 | P2 | Tb1| Tb2| P1 | P2 |\n");
						printf("|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|\n", PI[i], Trab1[i], Trab2[i], P1[i], P2[i]);
						printf("===============================\n");
						printf("A media deste aluno é: %.2f\n\n",media[i]);
						system("pause");
						system("cls");
					}
					else
					{
						if (opcao==5)
						{
							//Consultar boletim de todos os alunos
							printf("==============================\n");
							printf("BOLETIM DE TODOS OS ALUNOS\n");
							printf("==============================\n");
								for (i=1; i<=nalunos; i++)
								{
									printf("\n======= Notas do aluno %s =======\n",alunos[i]);
									printf("| P1 | P2 | Tb1| Tb2| P1 | P2 |\n");
									printf("|%.2f|%.2f|%.2f|%.2f|%.2f|%.2f|\n", PI[i], Trab1[i], Trab2[i], P1[i], P2[i], media[i]);
									printf("===============================\n");
									printf("A media deste aluno é: %.2f\n\n",media[i]);
								}
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
