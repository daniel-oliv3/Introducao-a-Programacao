#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	int r;
	
	printf("\n Informe Valor Acima De Duas Casas Decimais...: ");
	scanf("%d",&a);
	
	if ((a>100 and a<999) || (a>=-999 and a<=-100))
	{
		r = a/100;
		if(r%2==0)
		{
			printf("\n Este Numero Sera Par...");	
		}
		else
		{
			printf("\n Este Numero Sera Impar...");	
		}
	}
	else
	{
		printf("\n Esta Digitacao E invalida...");	
	}
	getch();
	return 0;
}
