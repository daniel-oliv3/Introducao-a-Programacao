#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"ptb");
	
	int nped,qtd,op;
	float vlped=0,prped,ptped=0;
	char dtped[20];
	
	printf("\n Informe O Numero Do Pedido...: ");
	scanf("%d",&nped);
	printf("\n Informe A Data Deste Pedido..: ");
	scanf("%s",&dtped);
	
	while(op!=0)
	{
		printf("\n Digite O Pre�o Unit�rio: ");
		scanf("%f",&prped);
		printf("\n Digite A Quantidade: ");
		scanf("%d",&qtd);
		
		vlped=prped*qtd;
		ptped=ptped+vlped;
		
		printf("\n Deseja Encerrar Suas Compras [ 0 ] Para N�o Ou  [ 1 ] Para Sim...: ");
		scanf("%d",&nped);
		
		while(op!=0 && op!=1)
		{
		printf("\n Oops, Algo errado tente novamente");
		printf("\n Deseja Encerrar Suas Compras [ 0 ] Para N�o Ou  [ 1 ] Para Sim...: ");
		scanf("%d",&op);
		}
	}
	printf("\n O N�mero Do Pedido �:  %d ",nped);
	printf("\n");
	printf("\n A Data Do Pedido �:  %s ",dtped);
	printf("\n");
	printf("\n O Total Do Pedido �:  %.2f ",ptped);
	printf("\n");
	
	getch();
	return 0;
}
