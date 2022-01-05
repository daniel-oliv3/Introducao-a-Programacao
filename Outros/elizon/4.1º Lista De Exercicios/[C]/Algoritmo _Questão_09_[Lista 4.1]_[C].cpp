#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int n=1,r,cont=1,i;
	float s=0,res;
	
	printf("\n Informe um valor para N: ");
	scanf("%d",&n);
	printf("\n Informe um valor para y: ");
	scanf("%d",&r);
	
	if(n>0 and r>0)
	{
		for (i=2;i<=n;i++)
		{
			s=s+pow(r,cont)/cont;
			cont++;	
		}
		printf("\n O resultado sera: %.2f ",s+1);
	}
	else
	{
		printf("\n Digitagao Invalida...");
	}
	getch();
	return 0;
}
