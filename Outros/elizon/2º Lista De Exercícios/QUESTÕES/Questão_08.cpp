#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	
	int n1;
	
	printf("\n Informe Um Valor: ");
	scanf("%d",&n1);
	
	system("cls");
	
	if (n1>20)
	{
		printf("\n Este Numero E Maior que 20...");
		printf("\n");
	}
	if (n1<20)
	{
		printf("\n Este Numero E menor que 20...");
		printf("\n");
	}
	if (n1==20)
	{
		printf("\n Este numero e Igual a 20....");
		printf("\n");
	}
	getch();
	return 0;
}
