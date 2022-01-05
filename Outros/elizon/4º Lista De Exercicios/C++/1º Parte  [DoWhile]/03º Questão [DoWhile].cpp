#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int res,num=1;
	
	do
	{
		printf("Multiplos de 5...\n");
		
		printf("Informe um numero: ");
		scanf("%d",&num);
		
		if(num!=0)
		{
		res=pow(num,2);
		printf("O quadrado de %d Sera %d\n",num,res);
		}
	}
	while(num%5==0);
	
	getch();
	return(0);
}
