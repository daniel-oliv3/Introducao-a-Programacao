#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// repita, executa no minimo uma vez

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b, r, resp=1;
	do{
		printf("Informe o valor para a variável A: \n");
		scanf("%d",&a);
		printf("Informe o valor para a variável B: \n");
		scanf("%d",&b);
		r=a+b;
		printf("O valor da variável R equivale a: %d\n",r);
		do{ // so faz o teste no final
			printf("Deseja continuar?\n");
			printf("Tecle [1] para SIM ou [2] para Não\n");
			scanf("%d",&resp);
			if(resp!=1 && resp!=2)
				printf("Número Invalido!\n");
		}while(resp!=1 && resp!=2);
		system("cls");
	}while(resp==1);
	system("Pause");
	return 0;
}

