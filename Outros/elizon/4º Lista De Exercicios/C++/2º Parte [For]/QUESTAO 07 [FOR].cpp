#include<stdio.h>
#include<conio.h>
   
int main()
{
    int i, j,k,l,n;
    
   printf("\n Informe Um Numero: ");
   scanf("%d",&n);
   
   	for (i=1;i<=n;i++)
	{
		if(n>0)
		{
			for (j=1; j <= 10;j++)
            printf("%3d + %3d = %3d\n", j, i, i + j);
       		printf("\n");	
		}
	}
		for (k=1; k <= n; k++)
	{
		if(n>0)
		{
			for (l=1;l<=n+10;l++)
                printf("%3d - %3d = %3d\n",k,l,k-l);
           		printf("\n");
		}
	} 	  	
	getch();
	return 0;
}	
