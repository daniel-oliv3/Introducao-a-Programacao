#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char senha[50];

	printf("\n Informe Sua Senha Por Favor...: ");
	gets(senha);

	if(strcmp(senha, "batatafrita")==0)
	{
		printf("\n Acesso Permitido...");
	}
	else
	{
		printf("\n Acesso Negado, Digite Novamente...");
	}
	getch();
	return 0;	
}
