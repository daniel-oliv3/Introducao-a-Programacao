#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int a,b,c,d;
	
	printf("\n Informe um valor Para A... : ");
	scanf("%d",&a);
	printf("\n Informe um valor Para B... : ");
	scanf("%d",&b);
	printf("\n Informe um valor Para C... : ");
	scanf("%d",&c);
	printf("\n Informe um valor Para D... : ");
	scanf("%d",&d);
	system("cls");
	if (a>b && a>c && a>d)
	{
		printf("\nO maior Numero Desta sequencia seria : %d ",a);
	}
	else if (b>a && b>c && b>d)
	{
		printf("\nO maior Numero Desta sequencia seria : %d ",b);
	}
	else if (c>a && c>b && c>d)
	{
		printf("\nO maior Numero Desta sequencia seria : %d ",c);
	}
	else if (d>a && d>b && d>c)
	{
		printf("\nO maior Numero Desta sequencia seria : %d ",d);
	}
	else if (a==b && a==c && a==d)
	{
		printf("\n Digitacao Invalida...");
	}
	else if (b==a && b==c && b==d)
	{
		printf("\n Digitacao Invalida...");
	}
	else if (c==a && c==b && c==d)
	{
		printf("\n Digitacao Invalida...");
	}
	else if (d==a && d==b && d==c)
	{
		printf("\n Digitacao Invalida...");
	}
	getch();
	return 0;
}
