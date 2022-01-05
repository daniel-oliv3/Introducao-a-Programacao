#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	int cond=1,num,cont,cont1,cont2,cont3;
	float media,media1;
	
	do
	{	
		printf("\n Informe um numero:  ");
		scanf("%d",&num);
	
		if(num>0)
			{
				cont++;
				media=num/cont;
				if(num%2==0)
				{
					cont1++;
					media1=num/cont1;
				}
				if(num%2==1)
				{
					cont2++;
				}
			}
				printf("\n Se Deseja continuar [[ 1 ]] Para Sim E [[ 2 ]] Para Nao:  ");
				scanf("%d",&cond);
				printf("\n");
	}
	while(cond==1);
	
	printf("\n O Total De Numeros Pares: %d",cont1);
	printf("\n");
	printf("\n O total De Numeros Impares: %d",cont2);
	printf("\n");
	printf("\n A Media Total: %.2f",media);
	printf("\n");
	printf("\n A Media Total Dos Pares: %.2f",media1);
	printf("\n");
	
	getch();
	return 0;
}
