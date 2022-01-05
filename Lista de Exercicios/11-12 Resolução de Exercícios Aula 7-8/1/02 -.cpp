#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 2 – Faça um algoritmo para somar dois números inteiros e multiplicar o
//resultado pelo primeiro número e mostre os resultados:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, num2, r, m, s;
	printf("Informe o primeiro número: \n");
	scanf("%d",&num1);
	printf("Informe o segundo número: \n");
	scanf("%d",&num2);
	s=num1+num2;
	m=s*num1;
	printf("A soma dos dois números é: %d + %d = %d\n",num1,num2,s);
	printf("A multiplicação do resultado pelo primeiro número é: %d x %d = %d\n",s,num1,m);	
	system("Pause");
	return 0;
}

