#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>
#include<conio.h>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  


	float p1, p2, p3, fod=0;
	int tt, cont=1;
	char nome[60];
	printf("Total de alunos: \n");
	scanf("%d", &tt);
	while(cont<=tt){
		cont++;
		fflush(stdin);
		printf("Nome do aluno: ");
		gets(nome);
		printf("\nInforme as notas em cada prova: ");
		scanf("%f %f %f", &p1, &p2, &p3);
		if(p1>6 && p2>6 && p3>6){
			printf("\naprovado em todas: %s", nome);
		}
		if(p1>6)
		printf("\naprovado na primeira prova: %s", nome);
		if(p3>6)
		fod++;
		getch();
		system("cls");
	}
	printf("\t%.1f%% aprovados no terceiro teste.", 100*fod/tt);
	getch();
}

