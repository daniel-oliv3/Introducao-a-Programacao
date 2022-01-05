#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{	
	int i,qtd,cont=0;
	float preco,npreco,acum;
	
	for(i=1;i<=15;i++)
	{
		cont++;
		printf("\n Informe O valor do %d produto:  ",cont);
		scanf("%f",&preco);
		printf("\n Informe A Quantidade do %d produto:  ",cont);
		scanf("%d",&qtd);
		if(preco>0 and npreco>0 and qtd>0)
		{
			npreco=preco*qtd;
			acum=acum+npreco;	
		}
	}
	printf("O total gasto pela empresa é de %.2f",acum);
	
	getch();
	return(0);
}
