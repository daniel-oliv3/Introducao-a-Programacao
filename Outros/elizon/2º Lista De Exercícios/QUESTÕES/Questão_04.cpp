#include<stdio.h>
#include<conio.h>

int main()
{
	int n1;

	printf("\n Informe um Numero: ");
	scanf("%d",&n1);

	if (n1>0)
	{
		printf("\n Este Numero E positivo ");
	}
	if (n1<0)
	{
		printf("\n Este Numero E Negativo");
	}
	if (n1==0)
	{
		printf("\n Este Numero E Nulo ");
	}
	getch();
	return 0;
}
