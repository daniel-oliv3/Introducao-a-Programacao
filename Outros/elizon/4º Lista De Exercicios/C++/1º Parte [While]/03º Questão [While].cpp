#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int res,num=1;
	
	while(num%5==0)
	{
		printf("\n Multiplos de 5...\n");
		
		printf("\n Digite um numero: ");
		scanf("%d",&num);
		
		if(num!=0)
		{
		res=pow(num,2);
		printf("\n O quadrado de %d Sera:  %d ",num,res);
		}
	}
	getch();
	return(0);
}
