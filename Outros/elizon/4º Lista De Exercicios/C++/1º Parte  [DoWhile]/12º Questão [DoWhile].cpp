#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"ptb");
	
	int n,r,p1,cont;
	char s;

	do
	{
		printf("\n Digite A progress�o: ");
		scanf("%d",&n);
		printf("\n Digite A Raz�o: ");
		scanf("%d",&r);
		printf("\n Digite A Termo Da Progress�o: ");
		scanf("%d",&p1);
		
		for(cont=1;cont<=n;cont++)
		{
			p1=p1+r;
			printf("\n O Resultado Da Progress�o �:  %d ",p1);
			printf("\n");
		}
			printf("\n Se Voce Deseja Efetuar A Progressao No Programa [S] Para Sim [N] Para Nao: ");
			fflush(stdin);
			scanf("%c",&s);
		do
		{
			printf("\n Voce Deseja Efetuar A Progressao No Programa [S] Para Sim [N] Para Nao: ");
			fflush(stdin);
			scanf("%c",&s);
		}
		while(s!='s' && s!='n');
	}
	while(s=='s');
	
	getch();
	return (0);
}
