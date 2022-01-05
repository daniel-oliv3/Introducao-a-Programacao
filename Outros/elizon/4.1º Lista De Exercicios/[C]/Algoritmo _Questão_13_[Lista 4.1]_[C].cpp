#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int r, cont, f, cont2, t;
	float exp=1;
	
	printf("\n Informe O Numero De Termos: ");
	scanf("%d", &t);
	
	printf("\n Informe O Valor Para R: ");
	scanf("%d",&r);
	system("cls");
	
	if(t>0 && r>0)
	{
		for(cont=1; cont<=t-1; cont++)
		{
			f=1;
			for(cont2=1; cont2<=cont; cont2++)
			{
				f=f*cont2;
			}
			exp+=pow(r,cont)/f;
		} 
		printf("\n O Resultado EXP Sera: %.2f", exp);
		getch();
	}
	else
	{
		printf("INVALIDO!");
	}
	getch();
	return 0;
}
