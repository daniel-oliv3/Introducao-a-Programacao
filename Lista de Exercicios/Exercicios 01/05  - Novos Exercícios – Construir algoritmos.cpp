#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//5 - Fa�a um algoritmo que leia um n�mero inteiro e escreva o seu
//antecessor


int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num1, result;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d",&num1);
	result = num1-1;
	printf("O seu antecessor �: %d\n",result);
	
	system("pause");
	return 0;
}
