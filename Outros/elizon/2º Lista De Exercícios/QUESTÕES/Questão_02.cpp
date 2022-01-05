#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;
	
	printf("\n Informe Um Valor Para X...: ");
	scanf("%d",&x);
	printf("\n Informe Um Valor Para Y...: ");
	scanf("%d",&y);
	
	if (x>y)
	{
		printf("\n O numero %d E  Maior que o Numero: %d ",x,y);
	}
	if (y>x)
	{
		printf("\n O numero %d E  Maior que o Numero: %d ",y,x);
	}
	else
	{
		printf("\n Digitacao Invalida, Digite Corretamente Numeros Diferentes...");
	}
	getch();
	return 0;
}
