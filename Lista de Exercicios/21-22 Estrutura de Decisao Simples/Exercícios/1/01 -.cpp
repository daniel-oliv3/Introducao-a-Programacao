#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 1 � Fa�a um algoritmo que leia um n�mero inteiro e escreva
//�MAIOR� se ele for maior que 10;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1;
	printf("Infrome um n�mero: \n ");
	scanf("%d",&num1);
	if(num1 > 10)
	{
		printf("N�mero MAIOR que 10\n");	
	}
	else
		printf("N�mero MENOR que 10\n");	
	system("Pause");
	return 0;
}

