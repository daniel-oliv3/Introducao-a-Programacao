#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//11. Criar um algoritmo que leia o saldo de uma aplicação e mostre após 30 dias (1 mês) como resultado o novo
//saldo, considerando o reajuste de 6,5%:


main() {
	setlocale (LC_ALL, "portuguese");
	system("color 1f");
	float entrada,saida;
	printf("Informe o saldo à aplicar: ");
	scanf("%f",&entrada);
	saida=((entrada*6.5)/100)+entrada;
	printf("Saldo após 30 dias é %.2f\n",saida);
	system("pause");
	return 0;
} 
