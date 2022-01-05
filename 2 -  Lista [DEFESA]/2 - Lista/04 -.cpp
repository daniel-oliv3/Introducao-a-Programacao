#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 4. Ler um número inteiro entre 1 e 12 e escrever o mês correspondente. Caso o usuário digite um número fora
//desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número:
//(Resolver com Se’s Aninhados e também com Múltipla Escolha).

int main()
{
	setlocale(LC_ALL, "portuguese");
	int op;
	printf("Informe um número (entre 1 e 12)\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("Janeiro\n");
			break;
		case 2:
			printf("Fevereiro\n");
			break;
	    case 3:
			printf("Março\n");
			break;
		case 4:
			printf("Abril\n");
			break;
		case 5:
			printf("Maio\n");
			break;
		case 6:
			printf("Junho\n");
			break;
		case 7:
			printf("Julho\n");
			break;
		case 8:
			printf("Agosto\n");
			break;
		case 9:
			printf("Setembro\n");
			break;
		case 10:
			printf("Outubro\n");
			break;
		case 11:
			printf("Novembro\n");
			break;
		case 12:
			printf("Dezembro\n");
			break;
		default:
			printf("Não existe mês com este número!\nO Número tem que estar entre 1 e 12\n");										
    }
	system("Pause");
	return 0;
}

