#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	
	float n1,n2,n3;
	
	printf("\n Informe O Primeiro valor... : ");
	scanf("%f",&n1);
	printf("\n Informe O Segundo valor.... : ");
	scanf("%f",&n2);
	printf("\n Informe O Teceiro valor.... : ");
	scanf("%f",&n3);
	
	system("cls");
	if (n1==n2 && n2==n3)
	{
		printf("\n Este e Um Triangulo Equilatero...");
	}
	if((n1>n2 || n1<n2 && n2>n3 && n2<n3))
	{
		printf("\n Este e Um Triangulo Isoceles...");
	}
	else
	{
		printf("\n Este e Um Triangulo Escaleno...");
	}
	getch();
	return 0;
}
