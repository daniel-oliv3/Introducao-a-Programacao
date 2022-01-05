#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//1 – Faça um algoritmo que leia um número inteiro e escreva
//“MAIOR” se ele for maior que 10;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Informe um número: \n");
	scanf("%d",&num);
	if(num > 10)
	{
		printf("O número e maior que 10\n");	
	}	
	else
	{
		printf("O número e menor que 10\n");
	}
	
	system("Pause");
	return 0;
}

