#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//16 - Fa�a um algoritmo que receba o c�digo correspondente ao cargo de um funcion�rio e seu sal�rio atual e
//mostre o cargo, o valor do aumento e seu novo sal�rio. Os cargos est�o na tabela a seguir.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float s, au;
	int c;
	printf("Tabela de Cargos [Informe o Codigo]\n");
	printf("[1] - Escritur�rio.\n");
	printf("[2] - Secret�rio.\n");
	printf("[3] - Caixa.\n");
	printf("[4] - Gerente.\n");
	printf("[5] - Diretor.\n");
	scanf("%d",&c);
	printf("Informe o sal�rio atual: \n");
	scanf("%f",&s);
	switch(c){
	case 1:
		au = s*0.50;
		printf("O cargo escolhido foi: ESCRITUR�RIO.\n");
		break;
	case 2:
		au = s*0.35;
		printf("O cargo escolhido foi: SECRET�RIO.\n");
		break;
	case 3:
		au = s*0.20;
		printf("O cargo escolhido foi: CAIXA.\n");
		break;
	case 4:
		au = s*0.10;
		printf("O cargo escolhido foi: GERENTE.\n");
		break;
	case 5:
		printf("O cargo escolhido foi: DIRETOR.\n");
		printf("N�o tem Aumento!\n");
		break;
	default:
		printf("O n�mero tem que estar entre 1 e 5\n");
	}
		printf("O valor do aumento �: %.2f\n",au);
		printf("O novo sal�rio �: %.2f\n",s+au);

			
	system("Pause");
	return 0;
}

