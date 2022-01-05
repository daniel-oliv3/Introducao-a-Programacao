#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int cont,n;
	long int fat;
	
	printf("\n Programa fatorial \n");
	printf("\n Informe um numero: ");
	scanf("%d",&n);
	if (n>0)
	{
	for(cont=1;cont<=n;cont++)
	{
		fat*=cont;
	}
	printf("\nO Fatorial %d equivale a: %d\n\n",n,fat);	
	} 
	else
	{
		printf("\n Numero Invalido...");
	}	
			
	getch();
	return(0);
}
