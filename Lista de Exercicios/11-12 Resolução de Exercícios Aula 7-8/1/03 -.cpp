#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//3 – Faça um algoritmo que leia três números, mostre o resultado da
//multiplicação dos dois primeiros e somar o resultado da multiplicação
//com o terceiro número:


int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, num2, num3, r1, r2;
	printf("Informe o primeiro número: \n");
	scanf("%d",&num1);
	printf("Informe o segundo número: \n");
	scanf("%d",&num2);
	printf("Informe o terceiro número: \n");
	scanf("%d",&num3);
	r1 = num1*num2;
	r2 = r1+num3;
	printf("A multiplicação dos dois primeiros número é: %d x %d = %d\n",num1,num2,r1);
	printf("A soma do resultado da multiplicação com o terceiro número é: %d + %d = %d\n",r1,num3,r2);
	system("Pause");
	return 0;
}

