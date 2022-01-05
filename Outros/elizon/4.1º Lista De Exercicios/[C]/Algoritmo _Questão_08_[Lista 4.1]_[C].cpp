#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n,y,cont=2,i;
	float s=0,r=0;
	
	printf("\n Informe um valor para N: ");
	scanf("%d",&n);
	printf("\n Informe um valor para Y: ");
	scanf("%d",&y);
	
	if(n>0 and y>0)
	{
		for (i=2;i<=n;i++)
		{
			r=pow(y,cont);
			s=s+r/(float)cont;
			cont=cont+2;	
		}
		printf("\n O resultado sera: %.2f ",s+1);
	}	
	else if(n==0)
	{
		printf("\n Resultado: %d ",s);
	}
	else
	{
		printf("\n Somente Números Positivos...");
	}
	getch();
	return 0;
}
