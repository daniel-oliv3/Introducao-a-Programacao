#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() 
{
	int n,i=1,cont1=1,cont2=1,soma=0,soma2=0;
	
	for(i=1;i<=3;i++)
	{
		printf("\n Informe Um Numero: ");
		scanf("%d",&n);
		
		if(n%2==0)
		{
			cont1++;
			soma+=n;
		}
		else if(n%1==0 && n%n==0 || n!=2 and n!=3 and n!=5)
		{
			cont2++;
			soma2+=n;
		}
		else
		{
			printf("\n Invalido....");
		}
	}
		printf("\n A Soma Dos Numeros Pares é: %d ",soma);
		printf("\n");
		printf("\n A Soma Dos Numeros Primos é: %d ",soma2);
		printf("\n");
	getch();
	return(0);
}

