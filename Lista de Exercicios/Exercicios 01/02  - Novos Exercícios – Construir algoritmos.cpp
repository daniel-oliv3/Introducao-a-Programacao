#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//2 - Faça um algoritmo para somar dois números inteiros e multiplicar o
//resultado pelo primeiro número e mostre os resultados:

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, soma, result;
	
	printf("Informe o primeiro número: ");
	scanf("%d",&num1);
	printf("Informe o segundo número: ");
	scanf("%d",&num2);
	soma = num1+num2;
	result = soma*num1;
	printf("O resultado da soma e: %d\n",soma);
	printf("O resultado da multiplicação do resultado com o primeiro número e: %d\n",result);
	
	system("pause");
	return 0;
}
