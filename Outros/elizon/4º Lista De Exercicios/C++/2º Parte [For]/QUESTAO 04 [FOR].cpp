#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	char nome[20];
	float pr1,pr2,m,cont=0,mg=0,acum;
	int i;
	
	for(i=1;i<=2;i++)
	{
		printf("\n Informe O Nome Do Aluno:  ");
		fflush(stdin);
		gets(nome);
		printf("\n Informe Sua Primeira Nota:  ");
		scanf("%f",&pr1);
		printf("\n Informe Sua Primeira Nota:  ");
		scanf("%f",&pr2);
		
		if (pr1>0 and pr2>0)
		{
			m=(pr1+pr2)/2;
			acum=acum+m;
			cont++;
			mg=acum/cont;
			
			printf("\n Nome: %s ",nome);
			printf("\n Nota Da PR1: %.f ",pr1);
			printf("\n Nota Da PR2: %.f ",pr2);
			printf("\n Media Arredondada: %.0f ",m);
			printf("\n\n");
			
			getch();
			system("cls");	
		}
	}
	printf("\n A Media Total Da Sala Sera %.2f ",mg);

	getch();
	return(0);
}
