#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int op;
	
	printf("\n Escolha ===> 1 <=== Para Pizza...........\n");
	printf("\n Escolha ===> 2 <=== Para Picanha.........\n");
	printf("\n Escolha ===> 3 <=== Para Pixe Frito....\n\n");
	
	printf("\n Informe A Opcao A Ser Escolhida Entre 1 E 3...: ");
	scanf("%d",&op);
	
	if (op==1)
	{
		printf("\n Pedido Realizado Com Sucesso...Voce Escolheu Pizza... Bom Apetite...");
		printf("\n\n");
	}
	if (op==2)
	{
		printf("\n Pedido Realizado Com Sucesso...Voce Escolheu Picanha... Bom Apetite...");
		printf("\n\n");
	}
	if (op==3)
	{
		printf("\n Pedido Realizado Com Sucesso...Voce Escolheu Peixe Frito... Bom Apetite...");
		printf("\n\n");
	}
	else
	{
		printf("\n Digitacao Invalida...");
	}
	getch();
	return 0;
}
