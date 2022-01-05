#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b, r, resp;
	resp=1;
	while(resp==1){
		printf("Informe o valor para variável A: \n");
		scanf("%d",&a);
		printf("Informe o valor para variável B: \n");
		scanf("%d",&b);
		r=a+b;
		printf("O valor da variável R equivale a: %d\n",r);
		printf("Deseja continuar?\n");
		printf("tecle [1] para SIM ou [2] para NÃO\n");
		scanf("%d",&resp);
		while(resp!=1 && resp!=2){ // restringindo o usuario
			printf("Valor Invalido!\n");
			printf("Deseja continuar?\n");
			printf("Tecle [1] para SIM ou [2] para NÃO\n");
			scanf("%d",&resp);
		}
		if(resp==1)
		system("cls");
	}
	system("Pause");
	return 0;
}

