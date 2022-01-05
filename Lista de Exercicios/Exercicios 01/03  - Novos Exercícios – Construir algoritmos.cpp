#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//3 - Faça um algoritmo que leia três números, mostre o resultado da
//multiplicação dos dois primeiros e somar o resultado da multiplicação
//com o terceiro número:

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num1, num2, num3, mult, soma;
	
	printf("Digite o primeiro número: ");
	scanf("%d",&num1);
	printf("Digite o segundo número: ");
	scanf("%d",&num2);
	printf("Digite o terceiro número: ");
	scanf("%d",&num3);
	mult = num1*num2;
	soma = mult+num3;
	printf("O resultado da multiplicação dos dois primeiros número é: %d\n",mult);
	printf("O resultado da soma do resultado da multiplicação com o terceiro número é: %d\n",soma);
	
	
	system("pause");
	return 0;
}
