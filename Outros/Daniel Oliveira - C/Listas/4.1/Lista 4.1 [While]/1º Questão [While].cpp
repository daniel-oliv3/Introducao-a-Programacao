#include<stdio.h>
#include<conio.h>

int main()
{
	int num,cont=0;
	
	printf("\n Informe um numero: ");
	scanf("%d",&num);
	
	while (num!=0 && num>0)
	{
		if((num >= 50) && (num <= 200))
		{
			cont++;	
		}
		printf("\n A quantidade %d ", cont);
		printf("\n Informe um numro: ");
		scanf("%d",&num);	
	}
	getch();
	return 0;
}
