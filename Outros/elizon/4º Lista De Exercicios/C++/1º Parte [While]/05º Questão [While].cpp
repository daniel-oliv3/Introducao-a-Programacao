#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"ptb");
	int idade,cont=0,cont1=0,a;
	char nome[10];
	
	while(a!=1 && a!=2)
	{
		printf("Voce Deseja efetuar A Cadastrar no programa [1] Para Sim [2] Para Nao \n");
		scanf("%d",&a);
	}
	while(a==1)
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
			printf("desja cotinuar a cadastrar\n1-sim\n2-não\n");
			scanf("%d",&a);
			
			while(a!=1 && a!=2)
			{
				printf("Ops Algo errado\n");
				printf("desja cotinuar a cadastrar\n1-sim\n2-não\n");
				scanf("%d",&a);
			}
	}
	printf("Tem %d com menos de 21 \nTem também %d com mais de 50 anos",cont,cont1);
	
	getch();
	return(0);
}
