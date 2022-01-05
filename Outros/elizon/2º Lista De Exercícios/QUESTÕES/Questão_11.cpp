#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int a,b,x,pro=0;
	
	printf("\n Informe o Valor Para A... : ");
	scanf("%d",&a);
	printf("\n Informe o Valor Para B... : ");
	scanf("%d",&b);
	
	pro = a*b;
	
	if (pro>=20)
	{
		x=a;
		a=b;
	}
	else
	{
		b=x;
	}
	printf("\n O valor de A... : %d ",a);
	printf("\n O valor de B... : %d ",x);
	printf("\n O valor do Produto...: %d ",pro);
	
	getch();
	return 0;
}
