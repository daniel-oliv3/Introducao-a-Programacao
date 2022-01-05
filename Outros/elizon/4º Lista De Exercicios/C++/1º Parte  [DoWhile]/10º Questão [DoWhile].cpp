#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"ptb");
	
	float peso,altura,media,perc,cont3;
	int idade,cont=0,cont2=0,cont4=0;
	char s,nome[50];
	
	do 
	{
		printf("\n Digite Seu Nome: ");
		fflush(stdin);
		scanf("%s",&nome);
		printf("\n Digite Sua Idade: ");
		scanf("%d",&idade);
		printf("\n Digite Seu Peso: ");
		scanf("%f",&peso);
		printf("\n Digite Sua Altura: ");
		scanf("%f",&altura);
		
		cont3++;
		if(idade>50)
		{
			cont++;
		}
		if(idade>10 && idade<20)
		{
			cont2++;
			media=altura/cont2;
		}
		if(peso<45)
		{
			cont4++;
			perc=(cont4/cont3)*100;
		}
		printf("\n Deseja Cadastrar Alguém [[ S ]] Para Sim [[ N ]] Para Nao..: ");
		fflush(stdin);
		scanf("%c",&s);
		
		printf("\n Todos Que São Maiores De 50 É: %d",cont);
		printf("\n");
		printf("\n A Média Das Alturas É: %.2f",media);
		printf("\n");
		printf("\n A Porcentagem Dos Com Peso Inferior À 45 kilos É: %d",perc);
		printf("\n");
		
	}
	while(s=='s' || s=='S');

	getch();
	return 0;
}
