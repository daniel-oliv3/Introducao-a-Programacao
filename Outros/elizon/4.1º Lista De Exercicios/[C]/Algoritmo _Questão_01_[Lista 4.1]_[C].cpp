#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() 
{
	int n,cont,x;
	float s=0;

	printf("\n Informe Um Numero: ");
	scanf("%d",&n);

	if(n>0)
	{
	   cont=n;
       for(x=1;x<=n;x++)
	   {
    		s=s+((float)cont/n);
    		cont=cont-1;
       }
       printf("\n");
       printf("\n O Valor De S: %.2f ",s);
       printf("\n");
	}
	else
	{
		printf("\n Informe Um Valor Positivo");	
	}
	getch();
	return(0);
}

