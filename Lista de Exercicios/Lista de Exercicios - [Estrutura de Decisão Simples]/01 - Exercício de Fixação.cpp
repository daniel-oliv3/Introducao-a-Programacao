#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//1 � Fa�a um algoritmo que leia um n�mero inteiro e escreva
//�MAIOR� se ele for maior que 10;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	printf("Informe um n�mero: \n");
	scanf("%d",&num);
	if(num > 10)
	{
		printf("O n�mero e maior que 10\n");	
	}	
	else
	{
		printf("O n�mero e menor que 10\n");
	}
	
	system("Pause");
	return 0;
}

