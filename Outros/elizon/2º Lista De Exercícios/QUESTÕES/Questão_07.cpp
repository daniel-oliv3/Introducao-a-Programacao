#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int n1;
	
	printf("\n Informe um Numero: ");
	scanf("%d",&n1);
	
	if(n1%3==0)
	{
		printf("\n O numero e divisivel Por 3... %d",n1);
	}
	if (n1%7==0)
	{
		printf("\n O numero e divisivel Por 7... %d ",n1);
	}
	else
	{
		printf("\n Este Numero Nao Pode Ser Divisivel Por 3 E Nem Por 7 ... ");
	}
	getch();
	return 0;
}

