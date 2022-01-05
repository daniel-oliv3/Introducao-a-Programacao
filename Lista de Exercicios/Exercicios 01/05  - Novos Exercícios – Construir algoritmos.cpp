#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//5 - Faça um algoritmo que leia um número inteiro e escreva o seu
//antecessor


int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num1, result;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&num1);
	result = num1-1;
	printf("O seu antecessor é: %d\n",result);
	
	system("pause");
	return 0;
}
