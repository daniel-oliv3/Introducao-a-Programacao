#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 04 criar um algoritmo que leia um valor inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse número em ingles. isto é, "Sunday", se 1 "Monday", se 2, e assim por diante:


int main()
{
	setlocale(LC_ALL, "portuguese");
	int v;
	printf("Informe um valor: (entre 1 e 7)\n");
	scanf("%d",&v);
	switch(v){
		case 1:
			printf("Sunday (Domingo)\n");
			break;
		case 2:
			printf("Monday (Segunda-Feira)\n");
			break;
		case 3:
			printf("Truesday (Terça-Feira)\n");
			break;
		case 4:
			printf("Wednesday (Quarta-Feira)\n");
			break;
		case 5:
			printf("Thursday (Quinta-Feira)\n");
			break;
		case 6:
			printf("Friday (Sexta-Feira)\n");
			break;
		case 7:
			printf("Saturday (Sábado)\n");
			break;
			default:
				printf("Número deve estar (entre 1 e 7)\n");
	}
	system("Pause");
	return 0;
}

