#include<stdio.h>
#include<conio.h>

int main()
{
     int a1,a2,a,i,n;
     
     printf("\n Informe O Numero De termos: ");
     scanf("%d",&n);
     printf("\n Informe Numero Para A1 : ");
	 scanf("%d",&a1);
	 printf("\n Informe Numero Para A2 : ");
	 scanf("%d",&a2);
	 printf("\n");
     printf("%d - %d",a1,a2);
     
     for(i=3;i<=n;i++)
	 {
		if(i%2==0)
		{
			a=a2-a1;
		}
		else
		{
			a=a2+a1;	
		}
		a1=a2;
		a2=a;
		printf(" - %d",a);
	}
	printf("\n");
	
	getch();
	return(0);
}
