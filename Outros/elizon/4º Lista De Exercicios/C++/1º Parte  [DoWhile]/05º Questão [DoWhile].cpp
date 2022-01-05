#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"ptb");
	int idade,cont=0,cont1=0,a;
	char nome[10];
	
	do
	{
		printf("Voce Deseja efetuar A Cadastrar no programa [1] Para Sim [2] Para Nao \n");
		scanf("%d",&a);
	}
	while(a!=1 && a!=2 and a>0);
	
	do
	{
		printf("Digite o nome da pessoa\n");
		scanf("%s",nome);
		printf("Digite a idade da pessoa\n");
		scanf("%d",&idade);
		
		if(idade>0 && idade<21)
		{
			cont++;
		}
		else if(idade>50)
		{
			cont1++;
		}
		printf("Voce Deseja efetuar A Cadastrar no programa [1] Para Sim [2] Para Nao \n");
		scanf("%d",&a);
		
		while(a!=1 && a!=2)
		{
			printf("Algo errado\n");
			printf("Voce Deseja efetuar A Cadastrar no programa [1] Para Sim [2] Para Nao \n");
			scanf("%d",&a);
		}
	}
	while(a==1);
	
	printf("Tem %d com menos de 21 \n Tem também %d com mais de 50 anos...",cont,cont1);
	
	getch();
	return(0);
}
