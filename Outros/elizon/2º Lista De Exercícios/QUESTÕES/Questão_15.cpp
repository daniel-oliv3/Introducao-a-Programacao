#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	
	char sexo,nome[50];
	int id;
	
	printf("\n Para A Opcao De Sexo Feminino, Recomenda-se =====>>>> F Ou f...");
	printf("\n\n");
	
	printf("\n Informe Seu Nome... : ");
	gets(nome);
	printf("\n Informe Seu Sexo... : ");
	scanf("%s",&sexo);
	printf("\n Informe Sua Idade...: ");
	scanf("%d",&id);
	
	
	if ((sexo=='f' || sexo=='F') and id<=25)
	{
		printf("\n Voce %s Acesso Permitido, Permicao Confirmada...",nome);
	}
	else
	{
		printf("\n Acesso Negado Permicao Negada, Informe Corretamente Seus Dados...");
	}
	getch();
	return 0;
}
