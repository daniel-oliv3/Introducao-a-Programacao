#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"ptb");
	
	int num,acum=0,cont=0,ma=0,me;
	float media=0;
	
	printf("\n Informe Um Numero:  ");
	scanf("%d",&num);
	if (num>0)
	{
		do
		{
			printf("\n Informe Novamente Um Numero:  ");
			scanf("%d",&num);
			
			if(num>ma)
			{
				ma=num;
			}
			else if(num<me)
			{
				me=num;
			}
				acum=acum+num;
				cont++;
				media=acum/cont;
		}	
		while(num>0);
		
		printf("A Media Dos Números É %.2f",media);
		printf("\n");
		printf("O Maior Dos Números É %d",ma);
		printf("\n");
		printf("A Menor Dos Números É %d",me);	
		printf("\n");
	}				
	getch();
	return 0;
}
