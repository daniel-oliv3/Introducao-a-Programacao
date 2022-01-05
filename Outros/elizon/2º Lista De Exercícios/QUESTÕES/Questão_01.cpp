#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	
	printf("\n Informe Um Valor Para A...: ");
	scanf("%d",&a);
	printf("\n Informe Um Valor Para B...: ");
	scanf("%d",&b);
	
	if(b!=0)
	{
		if (a%b==0)
		{
			printf("\n A sera Divisivel por B ");
		}
		else
		{
			printf("\n Nao Sera Divisivel por B ");	
		}
	}
	else
	{
		printf("\n Nao e possivel...");
	}
	getch();
	return 0;		
}
