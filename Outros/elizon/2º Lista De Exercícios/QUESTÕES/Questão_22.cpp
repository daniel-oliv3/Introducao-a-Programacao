#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char nome[50];
	int id;
	
	printf("\n Informe Seu Nome...: ");
	scanf("%s",&nome);
	printf("\n Informe Sua Idade..: ");
	scanf("%d",&id);
	
	if (id <= 16)
	{
		printf("\n Voce %s E Um Nao Eleitor...",nome);
	}
	if (id>=18 and id<=65)
	{
		printf("\n Voce %s E Um Eleitor Obrigatorio....",nome);
	}
	else
	{
		printf("\n Voce %s E Um Eleitor Facultativo....",nome);
	}
	getch();
	return 0;
}
