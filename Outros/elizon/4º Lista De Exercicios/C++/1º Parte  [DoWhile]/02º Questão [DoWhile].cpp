#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
	char sexo;
	int contm=0,contf=0,resp=1;
	
	do
	{
		printf("\n Informe o Sexo: ");
		fflush(stdin);
		scanf("%c",&sexo);
		
		sexo = toupper(sexo);
	
		if(sexo == 'M')
		{
			contm++;
		}
		else if(sexo == 'F')
		{
			contf++;
		}
		else
		{
			printf("\n Opcao Invalida...");
		}
		printf("\n\n Se Deseja Continuar Informe [[ 1 ]] Para Sim ou [[ 2 ]] Para Nao...  ");
		scanf("%d",&resp);
		
		while(resp !=1 && resp !=2 )
		{
			printf("\n Resposta Incorreta...");
			printf("\n\n Informe [[ 1 ]] Para Sim ou [[ 2 ]] Para Nao...  ");
			scanf("%d",&resp);
		}
	}
	while(resp == 1);
	
	system("cls");
	
	printf("\n\n A quantidade de sexo Masculino Informado seria: %d ",contm);
	printf("\n");
	printf("\n A quantidade de sexo Feminino Informado seria: %d ",contf);
	printf("\n");
	getch();
	return 0;
}
