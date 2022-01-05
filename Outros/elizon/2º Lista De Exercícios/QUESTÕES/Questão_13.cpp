#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	
	int a,b,c,r;
	
	printf("\n Informe um Valor Para A... : ");
	scanf("%d",&a);
	printf("\n Informe um Valor Para B... : ");
	scanf("%d",&b);
	printf("\n Informe um Valor Para C... : ");
	scanf("%d",&c);
	
	if (a>b && a>c)
	{
		r =  b + c ;
		printf("\n O resultado Seria... :%d ",r);
	}
	if (b>a && b>c)
	{
		r = a * c;
		printf("\n O resultado Seria... : %d ",r);
	}
	if (c>a && c>b)
	{
		r = a - b;
		printf("\n O resultado Seria... : %d ",r);
	}
	getch();
	return 0;
}
