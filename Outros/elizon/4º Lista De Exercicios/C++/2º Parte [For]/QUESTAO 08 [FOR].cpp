#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int i=1,n;
	int fat;
	
	printf("\n Programa fatorial...");
	printf("\n");
	printf("\n Informe um numero: ");
	scanf("%d",&n);
	
	if (n>0)
	{
		for(i=1;i<=n;i++)
		{	
		fat=fat*i;
		}
		printf("\n O Fatorial %d equivale A: %d ",n,fat);	
		printf("\n\n");
	} 
	else
	{
		printf("\n Numero Invalido...");
	}	
	getch();
	return(0);
}
