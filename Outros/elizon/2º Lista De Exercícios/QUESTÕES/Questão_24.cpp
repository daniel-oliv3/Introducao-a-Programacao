#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	
	float sal,salm;
	
	printf("\n Informe O Respectivo Salario...: ");
	scanf("%f",&sal);
	
	if (sal < 500)
	{
		salm = sal + sal*0.30;
		printf("\n O Salario Reajustado Seria Agora... : %.2f ",salm);	
	}
	else
	{
		printf("\n Voce Recebe O Suficiente Para Nao Percisar Deste Beneficio...");
	}
	getch();
	return 0;
}
