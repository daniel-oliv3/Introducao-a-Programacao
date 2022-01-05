#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int n,r,p1,cont;
	char s;
	
	while(s!='s' && s!='n')
	{
		printf("Voce Deseja efetuar A progressao no programa [S] Para Sim [N] Para Nao...  ");
		printf("\n");
		fflush(stdin);
		scanf("%c",&s);
	}
	while(s=='s')
	{
		printf("Digite a progressão\n");
		scanf("%d",&n);
		printf("Digite a razão\n");
		scanf("%d",&r);
		printf("Digite a termo da progressão\n");
		scanf("%d",&p1);
		
		for(cont=1;cont<=n;cont++)
		{
			p1=p1+r;
			printf("O resultado da progressão é %d\n",p1);
		}
			printf(" Se Voce Deseja efetuar A progressao no programa [S] Para Sim [N] Para Nao \n");
			fflush(stdin);
			scanf("%c",&s);
			
	while(s!='s' && s!='n')	
	{
		printf("Voce Deseja efetuar A progressao no programa [S] Para Sim [N] Para Nao \n");
		fflush(stdin);
		scanf("%c",&s);
	}
	}
	getch();
	return (0);
}
