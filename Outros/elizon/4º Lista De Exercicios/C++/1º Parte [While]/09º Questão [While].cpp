#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{	
	float n_alu,cont=1,cont2=0;
	char nome[50];
	float p1,p2,p3,nota,porc;
	
	printf("\n Informe A Quantidade De Alunos Na Sala...:  ");
	scanf("%f",&n_alu);
	
	while(cont<=n_alu)
	{
		printf("\n Informe O Nome Do Aluno:  ");
		scanf("%s",&nome);
		printf("Informe A Primeira Nota:  ");
		scanf("%f",&p1);
		printf("Informe A Segunda Nota:  ");
		scanf("%f",&p2);
		printf("Informe A Terceira Nota:  ");
		scanf("%f",&p3);
		
		nota=(p1+p2+p3)/3;
		
		if(nota>=6)
		{
			printf("Os Aprovados são %s\n",nome);
		}
		if(p1>=6)
		{
			printf("Os Aprovados na primeira prova são %s\n",nome);
		}
		if(p3>=6)
		{
			cont2++;
			porc=(cont2/n_alu)*100;
			printf("A porccentagem dos alunos aprovados na 3 prova é de %3.2f%%\n",porc);
		}
		cont++;	
	}
	getch();
	
}
