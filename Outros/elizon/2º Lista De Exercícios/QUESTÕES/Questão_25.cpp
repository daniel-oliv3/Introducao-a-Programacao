#include<stdio.h>
#include<conio.h>

int main()
{
	float vi,ri,rin;
	int op;
	
	printf("\n Escolha ====> 1 <==== Para Poupanca..................");
	printf("\n");
	printf("\n Escolha ====> 2 <==== Para Fundos De Renda Fixa......");
	printf("\n\n");
	
	printf("\n Informe Sua Escolha Considerando As Opcoes Acima...: "); scanf("%d",&op);
	printf("\n Informe O Valor A Ser Investido...: ");                  scanf("%f",&vi);	

	if(op > 0 and op < 3)
	{
		if ( op == 1 )
		{
			ri  = (vi + vi)*0.03;
			rin = ri*30;
			printf("\n O Valor Com Investimento Seria Agora Apos Um Mes...: %.2f ",rin);	
		}
		if ( op == 2 )
		{
			ri  = (vi + vi)*0.04;
			rin = ri*30;
			printf("\n O Valor Com Investimento Seria Agora Apos Um Mes...: %.2f ",rin);
		}
	}
	else
	{
		printf("\n Digitacao Invalida...");
	}
	getch();
	return 0;
}
