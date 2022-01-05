#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	char op;
	
	printf("\n Informe Um Valor: ");
	scanf("%d",&n);
	printf("\n");
	
	if(n>0)
	{
		printf("\n  [[ + ]] ====>>>> Para Soma ");
		printf("\n");
		printf("\n  [[ - ]] ====>>>> Para Subtracao ");
		printf("\n");
		printf("\n  [[ x ]] ====>>>> Para Multiplicacao ");
		printf("\n");
		printf("\n  [[ : ]] ====>>>> Para Divisao ");
		printf("\n");
		printf("\n");
		printf("\n Informe Um Operador: ");
		fflush(stdin);
		scanf("%c",&op);
	
		switch(op)
		{
			case '+':
			for (i=1;i<=10;i++)
			{
				printf("\n %d  +  %d  = %d",n,i,n+i);
			}
			break;
			case '-' :
			for (i=1;i<=10;i++)
			{
				printf("\n %d  -  %d  = %d",n+i,n,i);	
			}
			break;
			case 'x' :
			for (i=1;i<=10;i++)
			{
				printf("\n %d  x  %d  = %d",n,i,n*i);	
			}
			break;
			case ':' :
			for (i=1;i<=10;i++)
			{
				printf("\n %d  +  %d  = %d",n*i,n,i);	
			}
			break;
		}
	}
	else
	{
		printf("\n Operador Invalido...");
	}
	getch();
	return 0;
}
