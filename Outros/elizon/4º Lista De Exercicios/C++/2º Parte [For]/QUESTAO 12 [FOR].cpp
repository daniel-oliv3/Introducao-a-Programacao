#include<stdio.h> 
#include<conio.h>

int main()
{ 
	int n,i,fat,cont=0,var=0,n1,x;
	
		printf ("\n Informe Um Numero De Vezes Que Deseja: "); 
		scanf("%d",&n);
		
		for (i=1;i<=n;i++)
		{ 
			printf ("\n Informe Um Numero: "); 
		    scanf("%d",&n1);
		    fat=1;
		    for(x=n1;x>=1;x--)
		    {
		    	fat=fat*x;	
			}
			cont++;
			printf("\n O Fatorial De %d Sera: %d ",n1,fat);
			printf("\n");
		}
	getch();		
  	return 0;
} 
