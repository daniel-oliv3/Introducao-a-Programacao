#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	int i=0,x,nt,k,exp=1,fat;
	float s=0;

	printf("\n Informe Um Valor Para N : ");
	scanf("%d",&nt);
	printf("\n Informe Um Valor Para X : ");
	scanf("%d",&x);

	if(x>0 && nt>0)
	{	
		for(i=2;i<=nt;i++)
		{
			fat=1;
			for(k=1;k<=exp;k++) 
			{
				fat=fat*k;
			}
			if(i%2==0)
			{
				s=s-pow(x,exp)/fat;
			}
			else
			{
				s=s+pow(x,exp)/fat;
			}
				exp=exp+2;
			}
			printf("\n O valor de S Sera: %.2f",s+1);
			printf("\n");
	}
		printf("\n Valor invalido!");

	system ("pause");
	return(0);
}
