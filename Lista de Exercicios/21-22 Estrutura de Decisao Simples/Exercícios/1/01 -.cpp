#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 1 – Faça um algoritmo que leia um número inteiro e escreva
//“MAIOR” se ele for maior que 10;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1;
	printf("Infrome um número: \n ");
	scanf("%d",&num1);
	if(num1 > 10)
	{
		printf("Número MAIOR que 10\n");	
	}
	else
		printf("Número MENOR que 10\n");	
	system("Pause");
	return 0;
}

