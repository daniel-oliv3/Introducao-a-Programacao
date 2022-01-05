#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 10 – Leia o 1º. nome de uma pessoa, idade e altura e imprimi-los.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char nome[50];
	int idade;
	float altura;
	printf("Informe o seu primeiro nome: \n");
	scanf("%s",&nome);
	printf("Informe a seu idade: \n");
	scanf("%d",&idade);
	printf("Informe a sua altura: \n");
	scanf("%f",&altura);
	printf("Seu primeiro nome é: %s\n",nome);
	printf("Sua idade é: %d\n",idade);
	printf("Sua altura é: %.2f\n",altura);
	system("Pause");
	return 0;
}

