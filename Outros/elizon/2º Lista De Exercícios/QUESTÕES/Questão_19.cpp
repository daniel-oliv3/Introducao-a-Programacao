#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	
	char  op;
	float vg,v,km,vc;
	
	printf("\n Tipo ===> A <=== Corresponde AO Carro Percorre 8km P/Litro......");
	printf("\n");
	printf("\n Tipo ===> B <=== Corresponde AO Carro Percorre 9km P/Litro......");
	printf("\n");
	printf("\n Tipo ===> C <=== Corresponde AO Carro Percorre 12km P/Litro.....");
	printf("\n");
	
	printf("\n Informe O Modelo Ou Categoria Do Respectivo Carro...: ");
	scanf("%c",&op);
	printf("\n Informe O Valor Da Gasolina...: ");
	scanf("%f",&vg);
	printf("\n Informe A Distancia Percorrida Pelo Veiculo...: ");
	scanf("%f",&km);
	
	if(op=='a' || op=='A')
	{
		v=km/8;
		vc=v*vg;
	}
	if(op=='b' || op=='B')
	{
		v=km/9;
		vc=v*vg;
	}
	if(op=='c' || op=='C')
	{
		v=km/12;
		vc=v*vg;	
	}
	else
	{
		printf("\n Peencha Os Topicos Corretamente...\n");
	}
		printf("\n Carro Do Tipo %c Abasteceu Com o Valor de R$%.2f \n",op,v);
		printf("\n O Consumo Estimado Foi...: %.2f ",vc);
		
	getch();
	return 0;
}
