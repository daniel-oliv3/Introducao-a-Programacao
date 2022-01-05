#include<stdio.h>
#include<conio.h>

main()
{
	int n1;
	
	printf("\n Informe um numero: ");
	scanf("%d",&n1);
	
	if (n1%5==0)
	{
		printf("\n Este numero e divisivel por 5...");	
	}
	else
	{
		printf("\n Este numero nao e divisivel por 5...");	
	}
	getch();
	return 0;
}
