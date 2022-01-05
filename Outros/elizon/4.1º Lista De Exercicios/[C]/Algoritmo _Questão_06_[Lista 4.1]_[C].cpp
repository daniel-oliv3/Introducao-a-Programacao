
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() 
{
	int i=0,n,x,j=1;
	float s=0;

	printf("\n Informe Dois Valores: ");
	scanf("%d%d",&n,&x);
	
	if(x>0 && n>0)
	{
		while(i<n)
		{
			if(j==1)
			{
				for(j=1 ; j<=4 ; j++)
				{
					if(i<n)
					{
						if((i+2) &2==0)
						{
							s+=(pow(-x,(i+2)))/j;
							printf("-%d %d/%d\t",x,(i+2),j);
						}
						else
						{
							s+=(pow(x,(i+2)))/j;
							printf("-%d %d/%d\t",x,(i+2),j);
						}
						i++;
					}	
				}		
			}
			else
			{
				for(j=3 ; j>1 ; j--)
				{
					if(i<n)
					{
						if((i+2)%2==0)
						{
							s+=(pow(-x,(i+2)))/j;
							printf("- %d %d / %d \t",x,(i+2),j);
						}
						else
						{
							s+=(pow(x,(i+2)))/j;
							printf("- %d %d / %d \t",x,(i+2),j);
						}
						i++;
					}
				}
			}		
		}
			printf("\n O resultado da serie é: %.2f ",s);
	}
	else
	{
		printf("\n Valor Inválido...");
	}
	getch();
	return(0);
}
