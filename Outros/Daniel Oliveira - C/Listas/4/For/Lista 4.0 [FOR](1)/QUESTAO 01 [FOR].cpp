#include<stdio.h>
#include<conio.h>

int main()
{
	int n,menor,x;
	
	for (x=1;x<=5;x++)
	{
	printf("\n Informe o numero: ");
	scanf("%d",&n);
	
		if(x==1)
		{
			menor=n;
		}
		else if(n<menor)
		{
			menor=n;	
		}
	}
	printf("\n O menor sera %d ",menor);
		
	getch();
	return 0;
}
