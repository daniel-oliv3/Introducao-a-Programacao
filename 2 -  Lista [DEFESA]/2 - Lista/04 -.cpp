#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 4. Ler um n�mero inteiro entre 1 e 12 e escrever o m�s correspondente. Caso o usu�rio digite um n�mero fora
//desse intervalo, dever� aparecer uma mensagem informando que n�o existe m�s com este n�mero:
//(Resolver com Se�s Aninhados e tamb�m com M�ltipla Escolha).

int main()
{
	setlocale(LC_ALL, "portuguese");
	int op;
	printf("Informe um n�mero (entre 1 e 12)\n");
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
			printf("Mar�o\n");
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
			printf("N�o existe m�s com este n�mero!\nO N�mero tem que estar entre 1 e 12\n");										
    }
	system("Pause");
	return 0;
}

