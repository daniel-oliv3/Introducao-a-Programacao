#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//11. Criar um algoritmo que leia o saldo de uma aplica��o e mostre ap�s 30 dias (1 m�s) como resultado o novo
//saldo, considerando o reajuste de 6,5%:


main() {
	setlocale (LC_ALL, "portuguese");
	system("color 1f");
	float entrada,saida;
	printf("Informe o saldo � aplicar: ");
	scanf("%f",&entrada);
	saida=((entrada*6.5)/100)+entrada;
	printf("Saldo ap�s 30 dias � %.2f\n",saida);
	system("pause");
	return 0;
} 
