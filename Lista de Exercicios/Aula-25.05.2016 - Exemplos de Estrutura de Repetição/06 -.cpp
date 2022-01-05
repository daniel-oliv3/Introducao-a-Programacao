#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	char resp;
	int a, b, r;
	do{
		printf("Informe o valor para a variável A: \n");
		scanf("%d",&a);
		printf("Informe o valor para a variável B: \n");
		scanf("%d",&b);
		r=a+b;
		printf("O valor da variável R equivale a: %d\n",r);
		do{
			printf("Deseja continuar?\n");
			printf("Tecle [S] para SIM ou [N] para Não\n");
			fflush(stdin);
			scanf("%c",&resp);
			resp=toupper(resp);
			if(resp!='S' && resp!='N')
				printf("Número Invalido!\n");
		}while(resp!='S' && resp!='N');
		system("cls");
	}while(resp=='S');
	system("Pause");
	return 0;
}

