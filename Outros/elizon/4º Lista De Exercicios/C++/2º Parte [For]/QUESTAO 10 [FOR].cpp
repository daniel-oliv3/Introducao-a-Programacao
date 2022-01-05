#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{	
	int i,op=0,idade,cont1=0,cont3=0;
	float mi=0,total=0,cont2=0,perc=0,acum=0;
	
	for(i=1;i<=20;i++)
	{
		printf("\n Informe sua idade:  ");
		scanf("%d",&idade);
		if(idade>0)
		{
		printf("\n Escolha sua opiniao...");
		printf("\n");
		printf("\n  [[1]]  Regular...");
		printf("\n  [[2]]  Bom...");
		printf("\n  [[3]]  Excelente...");
		printf("\n");
		printf("\n Informe sua opiniao...:  ");
		scanf("%d",&op);	
		}
		total++;
		
		if(op==1 and op>0)
		{
			printf("\n Sua opniao foi regular...");
			cont1++;
		}
		if(op==2 and op>0)
		{
			printf("\n Sua Opniao Foi Boa...");
			cont2++;
			perc=cont2*100/total;
		}
		if(op==3 and op>0)
		{
			printf("\n Sua Opniao Foi Excelente...");
			cont3++;
			acum=acum+idade;
			mi=acum/cont3;
		}
		else
		{
			printf("\n Digitacao Invalida...");
		}
		system("cls");
	}
	printf("\n O Total De Regulares Foi De: %d ",cont1);
	printf("\n O Percentual De Bom Foi De: %.2f ",perc);
	printf("\n A Media Dos Excelentes Foi De: %.2f ",mi);
						
	getch();
	return(0);	
}
