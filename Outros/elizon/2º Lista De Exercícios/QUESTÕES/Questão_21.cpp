#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	
	int n1;
	
	printf("\n Informe Um Numero...: ");
	scanf("%d",&n1);
	
	if(n1>=20 and n1<=90)
	{
		printf("\n O Numero %d Estar Compreendido Entre 20 e 90...",n1);
	}
	else
	{
		printf("\n O Numero %d Nao Estar Entre 20 e 90, Digite Corretamente...",n1);
	}
	getch();
	return 0;
}
