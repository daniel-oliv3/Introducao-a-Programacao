#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int i;
	
	printf("\n Os Multiplos de 5...");
	printf("\n");
	
	for(i=1;i<=100;i++)
	{
		if(i%5==0)
		{
			printf("\n Sao esses:  %d ",i);
		}
	}
	
	getch();
	return(0);
}
