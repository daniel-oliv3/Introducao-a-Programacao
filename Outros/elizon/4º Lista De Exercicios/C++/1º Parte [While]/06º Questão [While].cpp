#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int num,f1=2,f2=1,f3;
	
	printf("\n Informe Um Numero:  ");
	scanf("%d",&num);
	printf("\n");
	
	if(num<0)
	{
		printf("Número inválido");
	}
	else
	{
		printf(" 0 - 1 ");
	
	while(f1<num)
	{
		f3=f2+f1;
		printf("- %d ",f3);
		f1=f2;
		f2=f3;
	}
	}
	getch();
	return(0);
}
