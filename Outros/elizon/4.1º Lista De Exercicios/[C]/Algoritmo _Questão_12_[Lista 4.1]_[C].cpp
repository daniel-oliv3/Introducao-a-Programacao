#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n,x,i,cont=1,num;
	float arc=0;
	
	printf("\n Informe O Numero De Termos: ");
	scanf("%d",&num);
	printf("\n Informe Um Valor Para X: ");
	scanf("%d",&x);
	printf("\n Informe Um Valor Para N: ");
	scanf("%d",&n);
	
	if (n>0 and x>0)
	{
		for(i=2;i<=num;i++)
		{
			if(i%2==0)
			{
				arc=arc-pow(x,cont)/cont;
			}
			else
			{
				arc=arc+pow(x,cont)/cont;
			}
			cont=cont+2;
		}
		printf("\n O Valor Do Arco Tangente Sera: %.2f ",arc);
	}
	else
	{
		printf("\n Informe Valores Maiores Que Zero: ");
	}
	getch();
	return 0;
}
