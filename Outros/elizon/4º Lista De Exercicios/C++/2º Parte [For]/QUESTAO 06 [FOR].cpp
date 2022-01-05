#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	char nome[50];
	int i,cont=0;
	float sal,des;
	
	for(i=1;i<=10;i++)
	{
		printf("\n Informe O nome do Trabalhador: ");
		fflush(stdin);
		gets(nome);
		printf("\n Informe O salario de %s: ",nome);
		scanf("%f",&sal);
		
		if(sal<600 and sal>0)
		{
			printf("\n Isento");
			printf("\n");
		}
		else if(sal>=600 and sal<1500 and sal>0)
		{
			des=sal*10/100;
			printf("\n O imposto de renda de %s Sera de %.2f ",nome,des);
			printf("\n\n");
		}
		else if (sal>=1500 and sal>0)
		{
			des=sal*15/100;
			printf("O imposto de renda de %s sera de %.2f ",nome,des);
			printf("\n\n");
		}
		else
		{
			printf("\n Digitacao Invalida...");
		}
	}
	getch();
	return(0);
}
