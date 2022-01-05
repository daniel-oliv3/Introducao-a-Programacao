#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	float pro,r;
	
	printf("\n Informe O Preco Do Produto... : ");
	scanf("%f",&pro);
	
	if ( pro < 20 )
	{
		r = pro + pro * 0.45;
		printf("\n O Preco Agora Seria... : %.2f ",r);
	}
	else
	{
		r = pro + pro * 0.30;
		printf("\n O Preco Nesse Caso Seria... : %.2f ",r);
	}
	getch();
	return 0;
}
