#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
int main()
{
	
	int a,b,c;
	
	printf("\n Informe Um Valor Para A...: ");
	scanf("%d",&a);
	printf("\n Informe Um Valor Para B...: ");
	scanf("%d",&b);
	
	if (a<b)
	{
		printf("\n A Ordem Seria...: %d  %d ",a,b);
	}
	else 
	{
		c=a;
		a=b;
		b=c;
		printf("\n A Ordem Seria...: %d %d ",a,b);
	}	
	getch();
	return 0;
}
