#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//#include<conio.c>

/* Programa que le os elementos de uma matriz 2 x 4;
Controle de 3 notas de 2 alunos com o calculo e armazenamento da média:*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float notas[2][4], total;
	for(int a=0; a<2; a++){
		printf("\n  Informe as notas do %dº aluno: \n",a+1);
		total=0;
		for(int nt=0; nt<3; nt++){
			printf("  Digite a %dº nota: ",a+1);
			scanf("%f",&notas[a][nt]);
			total+=notas[a][nt];
		}
		notas[a][3]=total/3;
	}	
	printf("\n\n");
	for(int a=0; a<2; a++){
		printf("\n  Notas do %dº aluno: \n",a+1);
		for(int nt=0; nt<4; nt++){
			if(nt<3)
			printf("  %dº nota: %.2f\n",nt+1,notas[a][nt]);
		else
			printf("\n\n  Média: %.2f\n",notas[a][nt]);	
		}
	}
	system("Pause");
	return 0;
}

