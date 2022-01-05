#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	int cond=1,num,cont,cont1,cont2,cont3;
	float media,media1;
	
	while(cond==1)
	{	
	printf("Informe um numero:  ");
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
		if(num%2!=0)
		{
			cont2++;
		}
		}
		printf(" Se Deseja continuar [[ 1 ]] Para Sim E [[ 2 ]] Para Nao:  ");
		scanf("%d",&cond);
		printf("\n");
			
		while(cond!=2 && cond!=1)
		{
			printf("Você digitou errado");
			printf(" Se Deseja continuar [[ 1 ]] Para Sim E [[ 2 ]] Para Nao:  ");
			scanf("%d",&cond);
			printf("\n");
		}
	}
	printf("O total de numeros pares: %d",cont1);
	printf("\n");
	printf("O total de numeros impares: %d",cont2);
	printf("\n");
	printf("A media total: %.2f",media);
	printf("\n");
	printf("A media total dos pares: %.2f",media1);
	printf("\n");
	
	getch();
	return 0;
	}
