#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	 setlocale(LC_CTYPE, "Portuguese");
	 
	int nalunos;
	printf("Digite a quantidade de alunos para o envio das notas: ");
	scanf("%d",&nalunos);
	system("cls");
	
	/*======================
	Declaração de variaveis
		Média Variavel
	======================*/
	float PI[nalunos],Trab1[nalunos],Trab2[nalunos],P1[nalunos],P2[nalunos],NF[nalunos];
	int i;
	/*====================*/
	for (i=1; i<=nalunos; i++)
	{
		printf("======= Média de Notas do Aluno %d =======\n \n",i);
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
    	NF[i] = (PI[i] * 0.5) + (P1[i] * 0.15) + (P2[i] * 0.15) + (Trab1[i] * 0.10) + (Trab2[i] * 0.10);
    	printf("\n =========== RESULTADO =========== \n");
		printf("PI   | Trab1 | Trab2 | P1   | P2   | Nota Final \n");
		printf("%.2f | %.2f  | %.2f  | %.2f | %.2f | %.2f  \n",PI[i]*0.5,P1[i]*0.15,P2[i]*0.15,Trab1[i]*0.10,Trab2[i]*0.10,NF[i]);
		system("pause");
		system("cls");
		
	}
}
