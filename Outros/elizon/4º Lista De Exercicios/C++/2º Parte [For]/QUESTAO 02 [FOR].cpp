#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,contpar,contimpar;
	contpar=0;
	contimpar=0;
	
	for(i=1;i<=20;i++)
	{		
		printf("\nInforme um numero: ");
		scanf("%d",&n);	
		
	if(n%2==0)
	{
		contpar++;
	}	
	else if(n%2==1)
	{
		contimpar++;
	}
	}
	printf("\n O numero PAR  e   %d", contpar);
	printf("\n");
	printf("\n O numero impar e  %d", contimpar);
	printf("\n");
		
	getch();
	return 0;
}
