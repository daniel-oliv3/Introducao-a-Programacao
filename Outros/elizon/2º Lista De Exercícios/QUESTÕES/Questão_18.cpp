#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
	char nome[30];
	float n1,n2,n3,md;
	
	printf("\n Informe Seu Respectivo Nome....:  ");
	gets(nome);
    fflush(stdin);
	printf("\n Informe Sua Primeira Nota......:  ");
	scanf("%f",&n1);
	printf("\n Informe Sua Segunda Nota.......:  ");
	scanf("%f",&n2);
	printf("\n Informe Sua Terceira Nota......:  ");
	scanf("%f",&n3);
	
	md = (n1+n2+n3)/3;
	
	system("cls");
	
	if (md>7 || md==7)
	{
		printf("\n Voce %s Esta Aprovado com A Respectiva Nota.....: %.2f " ,nome,md);
	}
	if(md<7 && md>3)
	{
		printf("\n Voce %s Esta Sujeito A Prova Final Com A Nota...: %.2f  " ,nome,md);
	}
	if (md<3)
	{
		printf("\n Voce %s Esta Reprovado com A Respectiva Nota....: %.2f " ,nome,md);
	}
	getch();
	return 0;
}
