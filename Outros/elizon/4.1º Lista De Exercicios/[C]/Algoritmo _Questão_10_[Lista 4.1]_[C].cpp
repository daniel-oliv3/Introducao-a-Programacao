#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	  int n,x,j,i=1,cont,fat;
	  float s;
	  s=0;
	  cont=2;
	  
	  printf("\n Informe O Valor De N: ");
	  scanf("%d",&n);
	  printf("\n Informe O Valor De X: ");
	  scanf("%d",&x);
	  
	  if(n>0 && x>0)
	  {
	  	for(i=2;i<=n;i++)
		  {
	  		fat=1;
	  		for(j=1 ; j<=cont ; j++)
			{
	  			fat=fat*j;
	  	 	}
	  		s+=(pow(x,cont))/fat;
	  		cont=cont+2;
	  	  } 
	  	printf("\n O resultado Sera : %.2f ",s+1);
	  }
	  else
	  {
	  	printf("\n Valor inválido");
	  }
	  getch();
	  return(0);
}
