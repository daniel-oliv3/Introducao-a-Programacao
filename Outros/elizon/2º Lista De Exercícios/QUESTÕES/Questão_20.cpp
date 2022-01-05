#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int main()
{
	char nome[50];
	int idn,ano,ant;
	printf("\n Informe Seu Nome....: ");
	gets(nome);
    fflush(stdin);
    printf("\n Informe O Ano Em Que Nasceu...: ");
    scanf("%d",&ano);
    printf("\n Informe O Ano Atual...: ");
    scanf("%d",&ant);
    
    if (ano<=ant)
	{
		idn = ant-ano;
    	printf("\n Voce  %s A Sua Idade Valida Seria ... : %d ",nome,idn);	
	}
	else
	{
		printf("\n Digitacao invalida...");
	}
    getch();
    return 0;
}
