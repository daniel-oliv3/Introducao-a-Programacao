#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//2 - Fa�a um algoritmo para somar dois n�meros inteiros e multiplicar o
//resultado pelo primeiro n�mero e mostre os resultados:

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, soma, result;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%d",&num1);
	printf("Informe o segundo n�mero: ");
	scanf("%d",&num2);
	soma = num1+num2;
	result = soma*num1;
	printf("O resultado da soma e: %d\n",soma);
	printf("O resultado da multiplica��o do resultado com o primeiro n�mero e: %d\n",result);
	
	system("pause");
	return 0;
}
