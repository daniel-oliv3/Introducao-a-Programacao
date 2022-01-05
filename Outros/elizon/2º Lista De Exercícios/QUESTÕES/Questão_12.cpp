#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int id;
	
	printf("\n Informe Sua Idade... : ");
	scanf("%d",&id);
	
	if (id>=18 and id<=64)
	{
		printf("\n Voce e Maior De Idade... ");
	}
	if (id<18)
	{
		printf("\n Voce e Menor De Idade... ");
	}
	if ((id>=65) and (id<=200))
	{
		printf("\n Voce e maior de 65 anos Ou Mais ... ");
	}
	getch();
	return 0;
}
