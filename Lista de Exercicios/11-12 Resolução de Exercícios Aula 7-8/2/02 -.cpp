#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 2 – Ler um número real e imprimir a terça parte deste número.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num1, r;
	printf("Informe um número: \n");
	scanf("%f",&num1);
	r = num1/3;
	printf("A terça parte de %.f é: %.2f\n",num1,r);
	system("Pause");
	return 0;
}

